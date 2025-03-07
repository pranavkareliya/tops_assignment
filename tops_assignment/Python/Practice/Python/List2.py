l = []
a = int(input("Enter Starting Range : "))
b = int(input("Enter Ending Range : "))
for i in range(a,b+1):
    if i % 5 == 0 and i % 7 != 0:
        l.append(i)
print(l)