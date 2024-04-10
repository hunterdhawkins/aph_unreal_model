# Generated by Django 5.0.3 on 2024-04-10 19:44

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='DataPoint',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('timestamp', models.DateTimeField()),
                ('tag_name', models.CharField(max_length=512)),
                ('tag_value', models.FloatField()),
            ],
        ),
        migrations.CreateModel(
            name='Replay',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('replay_name', models.CharField(max_length=256)),
                ('starting_timestamp', models.DateTimeField()),
                ('ending_timestamp', models.DateTimeField()),
            ],
        ),
    ]
