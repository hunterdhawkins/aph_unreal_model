from django.contrib import admin
from . import models

admin.site.register(models.Replay)
admin.site.register(models.DataPoint)