import random

file = open("data.txt","w")
for i in range(10):
    file.write(str(random.randint(1,100)) + ",")
file.close()

data = open("data.txt","r")
file.close()
