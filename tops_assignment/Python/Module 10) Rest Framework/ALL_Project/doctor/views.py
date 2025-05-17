from django.shortcuts import render
from .models import Doctor
from .serializers import DoctorSerializers
from rest_framework import generics

# Create your views here.
class DoctorLists(generics.CreateAPIView):
    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializers

class DoctorDetails(generics.RetrieveUpdateDestroyAPIView):
    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializers