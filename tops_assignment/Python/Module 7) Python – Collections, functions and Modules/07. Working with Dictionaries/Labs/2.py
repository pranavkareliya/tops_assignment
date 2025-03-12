# Write a Python program to merge two lists into one dictionary using a loop.

a = {1:"Python", 2:"Django", 3:"Flask"}
b = {4:"Java", 5:"React JS", 6:"Next JS"}

c = a.copy()
for key,value in b.items():
    c[key] = value

print(c)