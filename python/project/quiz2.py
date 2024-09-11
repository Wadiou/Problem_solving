import random 
def game():
    tools =["scissor" , "rock" , "paper"]
    guess = input("Scissor , Rock , Paper ? \n").lower()
    computer = random.choice(tools)
    print(computer)
    if computer == "scissor" and guess == "rock":
        print("you won !")
    elif computer == "scissor" and guess == "paper":
        print("you lost")
    elif computer == guess :
        print("draw")     
    if computer == "rock" and guess == "paper":
        print("you won !")
    elif computer == "rock" and guess == "scissor":
        print("you lost")  
    if computer == "paper" and guess == "scissor":
        print("you won !")
    elif computer == "paper" and guess == "rock":
        print("you lost")  
game()        