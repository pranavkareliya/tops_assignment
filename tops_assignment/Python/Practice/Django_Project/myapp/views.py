from django.shortcuts import render
from .models import Contact,User
from django.core.mail import send_mail
from django.conf import settings
import random

# Create your views here.
def index(request):
    return render(request, 'index.html')

def contact(request):
    if request.method=='POST':
        Contact.objects.create(
            name=request.POST['name'],
            email=request.POST['email'],
            mobile=request.POST['mobile'],
            remarks=request.POST['remarks'],
        )
        msg="Contact Saved Successfully..."
        contacts=Contact.objects.all().order_by("-id")
        return render(request, 'contact.html',{'msg':msg,'contacts':contacts})
    else:
        contacts=Contact.objects.all().order_by("-id")
        return render(request, 'contact.html',{'contacts':contacts})

def signup(request):
    if request.method=='POST':
        try:
            User.objects.get(email=request.POST['email'])
            msg2="Email Already Registered..."
            return render (request, 'signup.html',{'msg2':msg2})
        except:
            if request.POST['password'] == request.POST['cpassword']:
                User.objects.create(
                    fname=request.POST['fname'],
                    lname=request.POST['lname'],
                    email=request.POST['email'],
                    mobile=request.POST['mobile'],   
                    password=request.POST['password'],
                    address=request.POST['address'],
                )
                msg="User Sign Up Successfull..."
                return render(request, 'signup.html',{'msg':msg})
            else:
                msg2 = "Password & Confirm Password Does Not Match..."
                return render(request, 'signup.html',{'msg2':msg2})
    else:
        return render(request, 'signup.html')

def login(request):
    if request.method=='POST':
        try:
            user=User.objects.get(email=request.POST['email'])
            if user.password==request.POST['password']:
                request.session['name']=user.fname + " " + user.lname
                request.session['email']=user.email
                return render (request, 'index.html')
            else:
                msg2 = "Incorrect Email or Password..."
                return render(request, 'login.html',{'msg2':msg2})
        except:
            msg2 = "Email Not Registered..."
            return render(request, 'login.html',{'msg2':msg2})
    else:
        return render(request, 'login.html')
    
def logout(request):
    try:
        del request.session['name']
        del request.session['email']
        msg = "User Log Out Successfully..."
        return render(request, 'login.html',{'msg':msg})
    except:
        msg = "User Log Out Successfully..."
        return render(request, 'login.html',{'msg':msg})
    
def change_password(request):
    if request.method=="POST":
        user = User.objects.get(email=request.session['email'])
        if user.password == request.POST['old_password']:
            if request.POST['new_password'] == request.POST['cnew_password']:
                if user.password != request.POST['new_password']:
                    user.password = request.POST['new_password']
                    user.save()
                    msg = "Password Change Successfully...."
                    del request.session['name']
                    del request.session['email']
                    return render(request, 'login.html',{'msg':msg})
                else:
                    msg2 = "Old Password and New Password can not be same..."
                    return render(request, 'change_password.html',{'msg2':msg2})
            else:
                msg2 = "New Password and Confirm New Password does not Match..."
                return render(request, 'change_password.html',{'msg2':msg2})
        else:
                msg2 = "Old Password does not Match..."
                return render(request, 'change_password.html',{'msg2':msg2})
    else:
        return render(request, 'change_password.html')
    
def forgot_password(request):
    if request.method == "POST":
        try:
            user = User.objects.get(email = request.POST['email'])
            otp = random.randint(1000,9999)
            message = "Your OTP For Forgot Password is : "+str(otp)
            send_mail("OTP For Forgot Password", message, settings.EMAIL_HOST_USER, [user.email,])
            request.session['email'] = user.email
            request.session['otp'] = otp
            return render(request, 'otp.html')
        except:
            msg2 = "Email Not Registered"
            return render(request, 'forgot_password.html',{'msg2':msg2})
    else:
        return render(request, 'forgot_password.html')
    
def verify_otp(request):
    if int(request.session['otp']) == int(request.POST['otp']):
        del request.session['otp']
        msg = "Create Your New Password..."
        return render (request, 'new_password.html',{'msg':msg})
    else:
        msg2 = "Invalid OTP..."
        return render(request, 'otp.html',{'msg2':msg2})
    
def new_password(request):
    if request.POST['new_password'] == request.POST['cnew_password']:
        user = User.objects.get(email = request.session['email'])
        user.password = request.POST['new_password']
        user.save()
        msg = "Password Updated Successulyy..."
        del request.session['email']
        return render(request, 'login.html',{'msg':msg})
    else:
        msg2 = "New Password & Confirm Password does not Match..."
        return render(request, 'new_password.html',{'msg2':msg2})