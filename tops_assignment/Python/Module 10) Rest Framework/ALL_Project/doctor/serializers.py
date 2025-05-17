from rest_framework import serializers
from .models import Doctor

class DoctorSerializers(serializers.ModelSerializer):
    class Meta:
        model = Doctor
        fields = '__all__'