# Create a mini-project where students combine conditional statements, loops, and functions to create a basic Python application, such as a simple calculator or a grade management system.

print("Welcome to the Grade Management System.")

student_name = input("Enter Student Name : ")
student_std = int(input("Enter Student Standard : "))

print("Welcome ", student_name," You are in", student_std, "Standard.")

print("Please Enter Marks Subject wise and know Your Grade...")

maths = int(input("Enter Maths Marks : "))
science = int(input("Enter Science Marks : "))
english = int(input("Enter English Marks : "))

total_marks = maths + science + english

average = total_marks / 3

print("Your Total Mark is : ", total_marks)

print("Your Average Marks is : ", average)

if average >= 80:
    print("Grade A..!!")
elif average >= 70:
    print("Grade B..!!")
elif average >= 60:
    print("Grade C..!!")
elif average >= 50:
    print("Grade D..!!")
elif average >= 45:
    print("Grade E. Better Luck Next Time...")
else:
    print("Please Enter Valid Input...")

print("Thank You for using our Grade Management System...")


