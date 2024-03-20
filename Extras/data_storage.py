import json
from peewee import *
from playhouse.sqlite_ext import *
from datetime import date

# TODO: In future may want to make db not global, but for now it works

db = SqliteDatabase('aph_testing.db')

'''
class Person(Model):
    name = CharField()
    birthday = DateField()

    class Meta:
        database = db # This model uses the "people.db" database.

uncle_bob = Person(name='Bob', birthday=date(1960, 1, 15))
uncle_bob.save() # bob is now stored in the database
'''


class APH(Model):
    data = JSONField()
    class Meta:
        database = db
    
def save_reading():
    pass
    
    
def connect_to_db():
    db.connect()

def main():
    connect_to_db()
    db.create_tables([APH])
    '''
    memory_config_dict = read_memory_config_file()
    print(memory_config_dict)
    '''


if __name__ == '__main__':
    main()