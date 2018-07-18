#Chatbot Project, Girls Who Code
#Neha Maddali, 7-5-2018
import random

print("Hello! I'm Chatters!")
name = input("What is your name? ")
print("Hi "+name,"! What would you like to do?")

def main():
    print("Press 1 to hear a poem")
    print("Press 2 to play Rock-Paper-Scissors")
    print("Press 3 to hear a joke")
    print("Press 4 to add two numbers")
    print("Press 5 to play Hangman")
    print("Press 6 to exit")
    userChoice = input("What would you like to choose?")

    if userChoice =='1':
        poem()
    elif userChoice =='2':
        game()
        randomComputerChoice()
    elif userChoice =='3':
        joke()
    elif userChoice =='4':
        num1 = input("Enter a number")
        num2 = input("Enter another number")
        result = sum(int(num1),int(num2))
        print("Sum =", result)
    elif userChoice =='5':
        hangman()
    else:
        print("That's okay, see you later!")
        exit()

def poem():
    print("GREAT, HERE IS YOUR POEM:")
    print(" ")
    print("when the tiny")
    print("plane landed")
    print("it sounded")
    print("like my camera")
    print("rewinding")
    print("I thought,")
    print("this is")
    print("just a")
    print("picture")
    return (main())

def game():
    print("GREAT, LET'S PLAY!")
    print("Press R for rock")
    print("Press P for paper")
    print("Press S for scissors")
    gameChoice = input("What do you want to choose?").lower()

        #if loop for what the user wants to pick for the game
    if gameChoice == "r":
        return("Rock")
    elif gameChoice == "p":
        return("Paper")
    elif gameChoice =="s":
        return("Scissors")

def randomComputerChoice():
    options = ["Rock", "Paper", "Scissors"]
    randomChoice = random.choice(options)
    print("Here is what the computer chose:"+randomChoice)
    playAgain = input("Would you like to play again? Yes or No?").lower()
    if playAgain == "yes":
        print("Sure, let's play again!")
        return (game()+randomComputerChoice())
    else:
        startOver = input("Okay, would you like to do something else? Yes or No?").lower()
        if startOver == "yes":
            return (main())
        else:
            print("That's okay, see you later!")
            exit()

def joke():
    print("GREAT, HERE IS A JOKE!")
    print("How do functions break up?")
    print("...")
    answer = input("Do you know the answer? Yes or no?").lower()
    if answer == "yes":
        print("Great!")
        print("Was your answer 'THEY STOP CALLING EACH OTHER'?")
    else:
        print("Well then, here's the answer.")
        print("THEY STOP CALLING EACH OTHER!")
    return(main())

def sum(num1, num2):
    return (num1+num2)
    return(main())

def hangman():
    while(True):
        word = input("Please enter a word.").lower()
        if(word.isalpha() == False):
            print("That is not a word.")
        else:
            break
    answer = []
    answer.extend(word)
    display = []
    trash = []
    for i in range (0, len(word)):
        display.append("_")
    i = 6
    while(i>0):
        guess = input("Guess a letter.")
        for y in range (0, len(word)):
            if i==0:
                print("Try again with another word. Your guy is dead. Sorry. Bye.")
                hangman()
            if (not("_" in display)):
                print("You win!")
                main()
            if len(guess) ==1:
                if (word[y]==guess):
                    display[y] = guess
                    print(display)
                    print("Letters that didn't work:", trash)
                    print("Lives left:",i)
        if (not(guess in answer)):
            print("Sorry. Try again!")
            trash.append(guess)
            i -=1
            print("Lives left:",i)

main()
