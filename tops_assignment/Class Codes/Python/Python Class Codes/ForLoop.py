for i in range(10):
    print("I : ",i)

print("**************************************************")

for i in range(1,11):
    print("I : ",i)

print("**************************************************")

for i in range(1,11,3):
    print("I : ",i)

print("**************************************************")

for i in range(10,0,-1):
    print("I : ",i)

n = int(input("Enter Value : "))

# For Desc order
# sum = 0
# for i in range(n,0,-1):
#     sum = sum + i
# print("Single Sum : ",sum)

# For Asc order
sum = 0

for i in range(1,n+1):
    sum = sum + i
print("Sum is : ", sum)