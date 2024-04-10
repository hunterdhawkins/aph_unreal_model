import os
import numpy as np
import pandas as pd
import pyarrow as pa
import pyarrow.parquet as pq
from datetime import datetime
from datetime import timedelta
from django.core.management.base import BaseCommand


class Command(BaseCommand):
    help = "Django management command to be able to save daily data from parquet files to sqllite"
    daily_file_name = None
    data_table = None
    
    def get_daily_file_name(self):
        today = datetime.today()
        yesterday = today - timedelta(days= 1)
        yesterday = yesterday.strftime("%m-%d-%y")
        self.daily_file_name = "{}.parquet".format(yesterday)
    
    def read_parquet_file(self):
        # Move back one directory to be able to read in the table
        os.chdir("..")
        pandas_table = pq.read_table(self.daily_file_name)
        self.data_table = pandas_table
 
    def handle(self, *args, **options):
        self.get_daily_file_name()
        self.read_parquet_file()
        print(self.data_table)