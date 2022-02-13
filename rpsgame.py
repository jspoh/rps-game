#rock paper scissors game

import random

options = ("rock","paper","scissors") #rock=0,paper=1,scissors=2
user_wins=0
com_wins=0


while True:
  user_input = input ("Input Rock/Paper/Scissors to play and Q to quit ").lower()
  if user_input == "q":
    break
  if user_input in options:
    com_num = random.randint(0,2)
    com_pick = options[com_num]
    print(f"I picked {com_pick}!")
#draw
    if user_input == "rock" and com_pick =="rock":
      print("Again!")
      continue
    elif user_input == "paper" and com_pick =="paper":
      print("Again!")
      continue
    elif user_input == "scissors" and com_pick =="scissors":
      print("Again!")
      continue
#computer wins
    elif user_input == "rock" and com_pick == "paper":
      com_wins+=1
      print("I win! Play again?")
      again = input()
      if again == "yes":
        continue
      else:
        break
    elif user_input == "paper" and com_pick == "scissors":
      com_wins+=1
      print("I win! Play again?")
      again = input()
      if again == "yes":
        continue
      else:
        break
    elif user_input == "scissors" and com_pick == "rock":
      com_wins+=1
      print("I win! Play again?")
      again = input()
      if again == "yes":
        continue
      else:
        break
#user wins
    else:
      user_wins+=1
      print("You win! Play again?")
      again = input()
      if again == "yes":
        continue
      else:
        break
  else:
    continue

print(f"You've won {user_wins} games")
print(f"Computer won {com_wins} games")
if user_wins>com_wins:
  print("Congrats! You've won!")
else:
  print("Computer wins!")
print("Goodbye!")
