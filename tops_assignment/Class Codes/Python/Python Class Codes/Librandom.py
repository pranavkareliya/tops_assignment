import random

l = []
lucky = []

for i in range(1, 101):
    l.append(i)
# print(l)

for i in range(10):
    num = random.choice(l)
    lucky.append(num)
    l.remove(num)
print(l)
print()
print(lucky)