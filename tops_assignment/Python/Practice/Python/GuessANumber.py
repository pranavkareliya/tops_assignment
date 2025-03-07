import random

num = random.randint(1,20)

print("Guess A Number from 1 to 20")
while True:
    guess = int(input("Guess A Number : "))
    if guess == num:
        print("You Win")
        break
    elif guess > num:
        print("You chosse High Number")
    elif guess < num:
        print("You choose Low Number")