# Practical Example 6: Write a Python program to check if a number is prime using if_else

a = int(input("Enter A : "))

if a % 2 != 0:
    for i in range(3,int(a / 2) +1, 2):
        if a % i == 0:
            print(a,"is not Prime Number.")
        else:
            print(a,"is Prime Number.")
else:
    print(a,"is not Prime Number.")