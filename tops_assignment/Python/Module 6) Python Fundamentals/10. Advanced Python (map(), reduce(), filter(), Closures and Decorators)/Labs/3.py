# Write a Python program that filters out even numbers using the filter() function.

def oddNumber(num):
    return num % 2 != 0

n = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

evenNum = filter(oddNumber, n)
print(list(evenNum))