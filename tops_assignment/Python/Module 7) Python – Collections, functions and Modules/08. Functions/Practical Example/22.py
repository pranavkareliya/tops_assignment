# Write a Python program to create a lambda function with two expressions.

p = int(input("Enter P : "))
q = int(input("Enter Q : "))

a = lambda x, y: (x + y, x * y)

b = a(p,q)
print(b) 