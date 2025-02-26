# Write a generator function that generates the first 10 even numbers.

def generateEvenNumbers():
    
    count = 0
    
    for num in range(1,21):
        if num % 2 == 0:
            count += 1
            print(num, end=" ")
        
        if count == 10:
            break
        
generateEvenNumbers()