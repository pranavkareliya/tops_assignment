from django.shortcuts import render

# Create your views here.
def index(request):
    return render(request, 'index.html')

def forms_elements(request):
    return render(request, 'forms_elements.html')

def forms_layouts(request):
    return render(request, 'forms_layouts.html')

def forms_editors(request):
    return render(request, 'forms_editors.html')

def forms_validation(request):
    return render(request, 'forms_validation.html')

def pages_error_404(request):
    return render(request, 'pages_error_404.html')

def pages_blank(request):
    return render(request, 'pages_blank.html')

def tables_general(request):
    return render(request, 'tables_general.html')

def tables_data(request):
    return render(request, 'tables_data.html')

def profile(request):
    return render(request, 'profile.html')

def contact(request):
    return render(request, 'contact.html')

def login(request):
    return render(request, 'login.html')

def register(request):
    return render(request, 'register.html')

def society_members(request):
    return render(request, 'society_members.html')

def society_watchmens(request):
    return render(request, 'society_watchmens.html')