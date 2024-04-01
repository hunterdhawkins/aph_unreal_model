from django.urls import path
from django.contrib.auth import views as auth_views
from . import views

urlpatterns = [
    path('', views.home, name="home"),
    path('single-tag-graph/', views.display_single_data_point_graph, name='home-display-single-data-point'),
    path('control-method/', views.control_method, name='home-control-method'),
]