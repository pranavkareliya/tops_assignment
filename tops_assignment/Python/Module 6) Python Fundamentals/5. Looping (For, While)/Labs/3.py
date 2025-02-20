# Practical Example 3: Write a Python program to find a specific string in the list using a simple for loop and if condition.

List1 = ['apple', 'banana', 'mango']
specific = "orange"

for i in List1:
    if i == specific:
        break

if i == specific:
    print(specific,"is Found in List.")
else:
    print(specific,"is not Found in List.")