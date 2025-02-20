# Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if

print("Enter Your age to check you are eligible to donate blood or not")

a = int(input("Enter Age : "))
w = int(input("Enter Weight : "))

if a >= 18 and a<=55:
    if w >= 50:
        print("You are Eligible to Donate Blood...")
    else:
        print("You are not Eligible to Donate Blood...")
else:
    print("You are not Eligible to Donate Blood...")