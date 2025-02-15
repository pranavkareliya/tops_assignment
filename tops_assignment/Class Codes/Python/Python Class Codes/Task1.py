# get value N from user and continue loop untill to N, N as key and N * N as value

n = int(input("Enter N : "))

for i in range(1, n+1):
    print(i ," : ", i * i)
    i = i + 1
