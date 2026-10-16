# Ask the user their age as integer and decide whether they are allowed to drive a car

# age = int(input("What's your age"))  
# canDrive = False

# if age < 16:
#     canDrive = True
#     print ("You can drive")
# else:
#     print("you can't drive")

#############
#Assignment 2 - E1
#############

# Even numbers have remainder 0 when divided by 2. 

# How To Find the remainder: 
# Step 1 DIVIDE: 461 / 4 = 115 
# Step 2 MULTIPLY: 4 x 115 = 460 
# Step 3 SUBTRACT: 461 - 460 = 1
# Step 4: Answer = 1

# First Attempt: 

# userInput = int(input ("Enter a number"))

# print(userInput / 2 * 2 - userInput)
# step1 = userInput / 2 #Didn't strip the decimal 
# print(step1)
# step2 = 2 * step1
# print(step2)
# step3 = userInput - step2
# print(step3)

# if userInput // 2 * 2 - userInput != 0:
#     print("odd!")
# else: 
#     print("even!")

#################
#Optimal solution: 
##################

# userNumber = int(input("Enter a number "))

# if userNumber % 2 != 0:
#     print("Odd!")
# else: 
#     print("even!")

##############
#Assignment 2 - E2
##############

# setUserPassword = str(input("Please enter a password "))
# minPasswordLength = 6
# passwordHasBeenSet = False

# while passwordHasBeenSet == False:

#     if len(setUserPassword) < minPasswordLength: 
#         print("password is too short, please try again")
#         setUserPassword = str(input("Please enter a password "))
#     else:
#         print("password has been set!")
#         passwordHasBeenSet = True

##############
#Assignment 3 e3
##############

#Divisible by 3 and 5 = multiple of 15. 
#If the number ends with 0 or 5 it is divisible by 5 
#if the sum of all its digits are a multiple of 3
# userNumber = int(input("Please enter a number to check divisibility "))
# isMultipleOfThree = False
# endsInZeroOrFive = False
# digitsArray = []
# userNumberIndexable = str(userNumber) 
# print(userNumberIndexable[1])

# for i in str(userNumber):

#     digitsArray.append(int(i))
#     print(f"pushed {i}")

# print (digitsArray)
# usersNumberSummed = sum(digitsArray)
# print(usersNumberSummed)

# if usersNumberSummed % 3 != 0: 
#     isMultipleOfThree = False
# else: 
#     isMultipleOfThree = True

# if digitsArray[len(digitsArray) - 1] == 0 or digitsArray[len(digitsArray) - 1] == 5: 
#     endsInZeroOrFive = True
# else: 
#     endsInZeroOrFive = False

# if isMultipleOfThree == True and endsInZeroOrFive == True: 
#     print("Divisible by 3 and 5")
# elif isMultipleOfThree == True and endsInZeroOrFive == False: 
#     print("Divisible by 3")
# elif isMultipleOfThree == False and endsInZeroOrFive == True: 
#     print("Divisible by 5")
# else: 
#     print("Not divisible by 3 or 5")

# 4) Age Category Classificator (<, <=, >= with if-elif-else)
# What to do:
# Ask the user for their age.
# Check the corresponding category rules:
# If age < 0, print "Invalid age".
# 0–12, print "Child".
# 13–17, print "Teenager".
# 18+, print "Adult".

# example output: 

# Enter age: -5
# Invalid age
# Enter age: 10
# Child
# Enter age: 15
# Teenager
# Enter age: 25
# Adult


# userAge = int(input("What's your age?"))

# if userAge < 0: 
#     print("Invalid age")
# elif userAge <13: 
#     print("child")
# elif userAge <18: 
#     print("Teenager")
# elif userAge > 17: 
#     print("adult")

# 8) "Guess the Number" Game (3 Attempts)
# What to do:
# Generate a secret integer from 1 to 20.
# Give the user exactly 3 attempts to guess it:
# Prompt for a number during each turn.
# If the guessed number is higher than the secret number → print "Too high".
# If it is less than the secret number → print "Too low".
# If it is equal → print "Correct!" and stop/exit the game.
# If they fail to guess the secret number after 3 attempts → print "You lost! The number was: X"
# (where X is the secret number).
# Sample output (Guessed correctly on 2nd attempt):

# import random

# secretInteger = random.randint(1, 20)
# userAttempts = 3 
# answerFound = False 

# print(secretInteger)

# while userAttempts > 0 and answerFound == False: 
#     userGuess = int(input("Please guess the secret number")) 
#     if userGuess == secretInteger: 
#         print("You have guessed the number!")
#         answerFound = True
#     elif userGuess < secretInteger:   
#         userAttempts -= 1 
#         print("Too low!")
#     elif userGuess > secretInteger: 
#         print("Too high!")
#         userAttempts -= 1 

# if answerFound == False:
#     print("You lose!")


