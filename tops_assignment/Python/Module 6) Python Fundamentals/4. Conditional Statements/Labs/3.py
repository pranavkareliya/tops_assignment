# Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder.

rno = int(input("Enter Roll No : "))
s1 = int(input("Enter Marks of English : "))
s2 = int(input("Enter Marks of Maths : "))
s3 = int(input("Enter Marks of Science : "))

total = s1+s2+s3
per = total / 3

if per >= 70 :
    print("Distinction")
elif per >=60 :
    print("First Class")
elif per >= 50 :
    print("Second Class")
elif per >= 40 :
    print("Third Class")
else :
    print("Fail")