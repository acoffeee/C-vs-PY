import random
answer = random.randint(0,10)
user_choice = 11
#print(f'answer: {answer}')
while user_choice != answer:
    user_choice = int(input("guess: "))
    if user_choice != answer:
        print("not quite!, try again")
print("you got it!")
