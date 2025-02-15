# get value from user N and untill the loop work, key as N and value is square of n

d1 = {}

n = int(input("Enter N : "))

for i in range(1,n+1):
    d1[i] = i * i
print(d1)
