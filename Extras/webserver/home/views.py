import datetime
from django.views.decorators.csrf import csrf_exempt
from django.shortcuts import render, HttpResponse
from django.core.paginator import Paginator, EmptyPage, PageNotAnInteger
from django.http import JsonResponse, HttpResponse, StreamingHttpResponse
from django.conf import settings
from home import utils, models
from home.forms import ReplayForm


def home(request):
        
    return render(
                    request,
                    "home/home.html",
                    {
                    }
    )


def display_single_data_point_graph(request):

    tag_data = None
    # tag_data = utils.read_json_file("data_points.json")
    return render(
					request,
					"home/display_single_tag_graph.html",
					{
						'tag_data': tag_data,
					}
	)


def control_method(request):

	control_mode = utils.read_json_file("control_mode.json")
	control_mode = control_mode['control_mode']

	all_replay_templates = models.Replay.objects.all()

	if request.method == 'POST':
		control_mode = request.POST.get("control_mode")
		utils.write_json_file(
								"control_mode.json",
								{"control_mode": control_mode}
							)
    
	return render(
					request,
					"home/control_method.html",
					{
						'current_control_mode': control_mode,
						'all_replay_templates': all_replay_templates,

					}
	)


def create_replay_template(request):

	if request.method == "POST":
		# create a form instance and populate it with data from the request:
		form = ReplayForm(request.POST)
		print(form.errors)
		# check whether it's valid:
		if form.is_valid():
			rn = form.cleaned_data['replay_name']
			st = form.cleaned_data['starting_timestamp']
			et = form.cleaned_data['ending_timestamp']

			# print(replay_name, starting_timestamp, ending_timestamp)
	
			data = models.Replay(
				replay_name = rn,
				starting_timestamp = st,
				ending_timestamp = et,
			)

			data.save()
	else:
		dummy_form_data = {
			"replay_name": "Replay Name",
			"starting_timestamp": "Starting Timestamp",
			"ending_timestamp": "Ending Timestamp",
		}
		form = ReplayForm(initial=dummy_form_data)

	return render(
					request,
					"home/create_replay_template.html",
					{
						"form": form,
					}
	)


# AJAX Views
@csrf_exempt
def get_data(request):
	data = utils.view_parquet_data()
	return JsonResponse(data)