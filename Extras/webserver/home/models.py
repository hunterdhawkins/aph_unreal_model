from django.db import models


class Replay(models.Model):
	replay_name = models.CharField(max_length=256)
	starting_timestamp = models.DateTimeField()
	ending_timestamp = models.DateTimeField()