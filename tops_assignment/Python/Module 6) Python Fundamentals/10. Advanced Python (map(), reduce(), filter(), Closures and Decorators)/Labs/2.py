# Write a Python program that uses reduce() to find the product of a list of numbers

from functools import reduce

def add(x, y):
    return x + y

n = [1, 2, 3, 4, 5]
ans = reduce(add, n)

print(ans) 