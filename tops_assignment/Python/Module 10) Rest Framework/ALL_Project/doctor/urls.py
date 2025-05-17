from django.urls import path
from .views import DoctorDetails, DoctorLists

urlpatterns = [
    path('api/Doctors/',DoctorLists.as_view()),
    path('api/Doctors/<int:pk>/',DoctorDetails.as_view()),
]