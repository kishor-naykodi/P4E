#Guess the no exercise 3

import random

print(f"********Game Rules***********\n"
      f"You have 9 guesses\n"
      f"And you have to guess no in range 1-100\n"
      f"If you guess in few guesses you won\n")

num = random.randint(1,100);
# print(f"Random number genrated is {num}")

for guesses in range(1,10):
      inp = int(input("Guess the no: "))

      if guesses == 9:
            print("You lose Try @gain")
      elif num==inp:
            print(f"You won in {guesses} guesses.\n \tGame over!!!")
            break
      elif num>inp:
            print(f"Your input is less than guessing no try greater one")
            continue
      elif num<inp:
            print(f"Your input is greater than guessing no try small one  ")
            continue
