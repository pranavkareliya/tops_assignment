# Write a Python program to convert two lists into one dictionary using a for loop.

a = ['A','B','C']
b = ["Python", "Django", "Flask"]
c = {}
for key,value in zip(a,b):
    c[key] = value

print(c)