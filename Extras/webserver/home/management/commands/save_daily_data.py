import os
import numpy as np
import pandas as pd
import pyarrow as pa
import pyarrow.parquet as pq
from datetime import datetime
from datetime import timedelta
from django.core.management.base import BaseCommand
from home import models


class Command(BaseCommand):
    help = "Django management command to be able to save daily data from parquet files to sqllite"
    daily_file_name = None
    data_table = None
    
    def get_daily_file_name(self):
        today = datetime.today()
        yesterday = today - timedelta(days = 0)
        yesterday = yesterday.strftime("%m-%d-%y")
        self.daily_file_name = "{}.parquet".format(yesterday)
    
    def read_parquet_file(self):
        # Move back one directory to be able to read in the table
        os.chdir("..")
        pandas_table = pq.read_table(self.daily_file_name)
        self.data_table = pandas_table
        
    def sort_data_and_save(self):
        timestamp_list = self.data_table[0].to_pylist()
        tag_name_list = self.data_table[1].to_pylist()
        tag_value_list = self.data_table[2].to_pylist()
        
        # Iterate through the timestamps of the data table
        for i in range(0, len(timestamp_list)):
            # Iterate through the values and names for each timestamp
            for j in range(0, len(tag_name_list[0])):
             
                # Check for already existing datapoints in the db with the same timestamp and name
                already_existing_DataPoint = models.DataPoint.objects.filter(timestamp=timestamp_list[i], tag_name=tag_name_list[i][j])
                if already_existing_DataPoint:
                    print("Datapoint already exists in db")
                else:
                    print("Datapoint does not exist, save to db")
                    DataPoint = models.DataPoint(
                        timestamp = timestamp_list[i],
                        tag_name = tag_name_list[i][j],
                        tag_value = tag_value_list[i][j],
                    )
                    DataPoint.save()
                
                
        
    def handle(self, *args, **options):
        self.get_daily_file_name()
        self.read_parquet_file()
        self.sort_data_and_save()