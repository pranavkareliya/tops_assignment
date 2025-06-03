from django.urls import path
from .views import BlogList, BlogDetail

urlpatterns = [
    path('api/blogDetail/',BlogList.as_view()),
    path('api/blogDetail/<int:pk>/',BlogDetail.as_view()),
]