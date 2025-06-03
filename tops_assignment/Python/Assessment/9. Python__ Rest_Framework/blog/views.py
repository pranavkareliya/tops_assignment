from django.shortcuts import render
from .models import Blog
from .serializers import BlogSerializers
from rest_framework import generics

# Create your views here.
class BlogList(generics.ListCreateAPIView):
    queryset = Blog.objects.all()
    serializer_class = BlogSerializers

class BlogDetail(generics.RetrieveUpdateDestroyAPIView):
    queryset = Blog
    serializer_class = BlogSerializers