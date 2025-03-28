from django.shortcuts import render,redirect
from .models import User,Product
from django.core.mail import send_mail
from django.conf import settings
import random

from django.db.models import Q

# Create your views here.
def index(request):
    return render(request, 'index.html')

def seller_index(request):
    return render(request, 'seller_index.html')

def contact(request):
    return render(request, 'contact.html')

def about(request):
    return render(request, 'about.html')

def product(request):
    products=Product.objects.all()
    return render(request, 'product.html',{'products':products})

def product_detail(request):
    return render(request, 'product_detail.html')

def signup(request):
    if request.method=="POST":
        try:
            User.objects.get(email=request.POST['email'])
            msg2 = "Email Already Registered..."
            return render(request, 'signup.html',{'msg2':msg2})
        except:
            if request.POST['password'] == request.POST['cpassword']:
                User.objects.create(
                    fname=request.POST['fname'],
                    lname=request.POST['lname'],
                    email=request.POST['email'],
                    mobile=request.POST['mobile'],
                    password=request.POST['password'],
                    address=request.POST['address'],
                    profile_picture=request.FILES['profile_picture'],
                    usertype=request.POST['usertype'],
                )
                msg = "User Sign Up Successfull..."
                return render(request, 'login.html',{'msg':msg})
            else:
                msg2 = "Password and Confirm Password Must Be Same..."
                return render(request, 'signup.html',{'msg2':msg2})
    else:
        return render(request, 'signup.html')

def login(request):
    if request.method == "POST":
        try:
            user = User.objects.get(email=request.POST['email'])
            if user.password == request.POST['password']:
                request.session['email'] = user.email
                request.session['fname'] = user.fname
                request.session['profile_picture'] = user.profile_picture.url
                if user.usertype == "buyer":
                    return render(request, 'index.html')
                else:
                    return render(request, 'seller_index.html')
            else:
                msg2 = "Incorrect Password..."
                return render(request, 'login.html',{'msg2':msg2})
        except:
            msg2 = "Email Not Registered..."
            return render(request, 'login.html',{'msg2':msg2})
    else:
        return render(request, 'login.html')
    
def logout(request):
    try:
        del request.session['email']
        del request.session['fname']
        del request.session['profile_picture']
        return render(request, 'login.html')
    except:
        return render(request, 'login.html')
    
def profile(request):
    user = User.objects.get(email=request.session['email'])
    if request.method == "POST":
        user.fname = request.POST['fname']
        user.lname = request.POST['lname']
        user.email = request.POST['email']
        user.mobile = request.POST['mobile']
        user.address = request.POST['address']
        try:
            user.profile_picture = request.FILES['profile_picture']
        except:
            pass
        user.save()
        request.session['profile_picture'] = user.profile_picture.url
        msg = "Profile Updated Successfully..."
        if user.usertype == "buyer":
            return render(request, 'profile.html',{'user':user,'msg':msg})
        else:
            return render(request, 'seller_profile.html',{'user':user,'msg':msg})
    else:
        if user.usertype == "buyer":
            return render(request, 'profile.html',{'user':user})
        else:
            return render(request, 'seller_profile.html',{'user':user})
    
def change_password(request):
    user = User.objects.get(email=request.session['email'])
    if request.method == "POST":
        if user.password == request.POST['old_password']:
            if request.POST['new_password'] == request.POST['cnew_password']:
                if user.password != request.POST['new_password']:
                    user.password=request.POST['new_password']
                    user.save()
                    msg = "Password Change Successfullyy..."
                    del request.session['email']
                    del request.session['fname']
                    del request.session['profile_picture']
                    return render(request, 'login.html',{'msg':msg})
                else:
                    msg2 = "New Password and Old Password Must be Different..."
                    if user.usertype == "buyer":
                        return render(request, 'change_password.html',{'msg2':msg2})
                    else:
                        return render(request, 'seller_change_password.html',{'msg2':msg2})
            else:
                msg2 = "New Password and Old Password Doesn't Match..."
                if user.usertype == "buyer":
                    return render(request, 'change_password.html',{'msg2':msg2})
                else:
                    return render(request, 'seller_change_password.html',{'msg2':msg2})
        else:
            msg2 = "Old Password Doesn't Match..."
            if user.usertype == "buyer":
                return render(request, 'change_password.html',{'msg2':msg2})
            else:
                return render(request, 'seller_change_password.html',{'msg2':msg2})
    else:
        if user.usertype == "buyer":
            return render(request, 'change_password.html')
        else:
            return render(request, 'seller_change_password.html')
    
def forgot_password(request):
    if request.method == "POST":
        try:
            user = User.objects.get(email = request.POST['email'])
            otp = random.randint(1000,9999)
            print("OTP is : ",otp)
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

def shoping_cart(request):
    return render(request, 'shoping_cart.html')

def seller_add_product(request):
        if request.method == "POST":
            seller = User.objects.get(email=request.session['email'])
            Product.objects.create(
                seller=seller,
                product_category=request.POST['product_category'],
                product_name=request.POST['product_name'],
                product_price=request.POST['product_price'],
                product_size=request.POST['product_size'],
                product_desc=request.POST['product_desc'],
                product_picture=request.FILES['product_picture'],
            )
            msg = "Product Added Successfully..."
            return render(request, 'seller_add_product.html',{'msg':msg})
        else:
            return render(request, 'seller_add_product.html')
        
def seller_view_product(request):
    seller=User.objects.get(email=request.session['email'])
    products=Product.objects.filter(seller=seller)
    return render(request, 'seller_view_product.html',{'products':products})

def seller_product_details(request,pk):
    product=Product.objects.get(pk=pk)
    return render(request, 'seller_product_details.html',{'product':product})

def product_details(request,pk):
    product=Product.objects.get(pk=pk)
    return render(request, 'product_details.html',{'product':product})

def seller_edit_product(request,pk):
    product=Product.objects.get(pk=pk)
    if request.method=="POST":
        product.product_category=request.POST['product_category']
        product.product_name=request.POST['product_name']
        product.product_size=request.POST['product_size']
        product.product_price=request.POST['product_price']
        product.product_desc=request.POST['product_desc']
        try:
            product.product_picture=request.FILES['product_picture']
        except:
            pass
        product.save()
        return redirect('seller_view_product')
    else:
        return render(request, 'seller_edit_product.html',{'product':product})
    
def seller_delete_product(request,pk):
    product=Product.objects.get(pk=pk)
    product.delete()
    return redirect('seller_view_product')