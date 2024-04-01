from django import forms


class ReplayForm(forms.Form):
    replay_name = forms.CharField(label="Replay Name", max_length=256)
    starting_timestamp = forms.DateTime()
    ending_timestamp = forms.DateTime()

