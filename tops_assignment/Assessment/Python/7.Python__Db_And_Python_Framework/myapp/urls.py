from django.urls import path,re_path
from . import views

urlpatterns = [
    path('',views.login,name='login'),
    # path('',views.index,name='index'),
    path('index/',views.index,name='index'),
    path('forms_elements/',views.forms_elements,name='forms_elements'),
    path('forms_layouts/',views.forms_layouts,name='forms_layouts'),
    path('forms_editors/',views.forms_editors,name='forms_editors'),
    path('forms_validation/',views.forms_validation,name='forms_validation'),
    path('tables_general/',views.tables_general,name='tables_general'),
    path('tables_data/',views.tables_data,name='tables_data'),
    path('pages_error_404/',views.pages_error_404,name='pages_error_404'),
    path('pages_blank/',views.pages_blank,name='pages_blank'),
    path('society_members/',views.society_members,name='society_members'),
    path('society_watchmens/',views.society_watchmens,name='society_watchmens'),
    path('profile/',views.profile,name='profile'),
    path('contact/',views.contact,name='contact'),
    path('login/',views.login,name='login'),
    path('register/',views.register,name='register'),
    re_path(r'.*', views.login),
]