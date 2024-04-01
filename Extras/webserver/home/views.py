import datetime
from django.views.decorators.csrf import csrf_exempt
from django.shortcuts import render, HttpResponse
from django.core.paginator import Paginator, EmptyPage, PageNotAnInteger
from django.http import JsonResponse, HttpResponse, StreamingHttpResponse
from django.conf import settings
from home import utils, models


def home(request):
        
    return render(
                    request,
                    "home/home.html",
                    {
                    }
    )


def display_single_data_point_graph(request):
        
    return render(
                    request,
                    "home/display_single_tag_graph.html",
                    {
                    }
    )


def control_method(request):
	control_mode="real-time"

	if request.method == 'POST':
		control_mode = request.POST.get("control_mode")
		print(control_mode)
    
	return render(
					request,
					"home/control_method.html",
					{
						'current_control_mode': control_mode,
					}
	)


def create_replay_template(request):
    
	return render(
					request,
					"home/create_replay_template.html",
					{
					}
	)