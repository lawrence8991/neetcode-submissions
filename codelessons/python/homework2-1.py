# Task 1: Accessing List Elements with Positive and Negative Indexes
    
# Create a list called colors with the values: ["red", "blue", "green",
# "yellow", "purple"]. Print the first element (index 0), the third element
# (index 2), and the last element using a negative index (-1). Also print the
# second-to-last element using a negative index.
# Sample output:
# First element: red
# Third element: green
# Last element: purple
# Second to last: yellow

# Create a list called colors with the values: ["red", "blue", "green",
# "yellow", "purple"]. Print the first element (index 0), the third element





# values = ["red", "blue", "green","yellow", "purple"]
# print (values[0])
# print (values[2])
# print (values[-1])
# print (values[-2])


# Task 2: Appending and Extending Lists
# Create an empty list called backpack. Ask the user to enter two items and
# append each one to backpack. Then create another empty list called pocket.
# Ask the user to enter one item and append it to pocket. Finally, extend the
# backpack list with all items from pocket and print the final backpack.
# Sample output:
# Enter item for backpack: water bottle
# Enter item for backpack: sandwich
# Enter item for pocket: keys
# Final backpack: ['water bottle', 'sandwich', 'keys']
#

# backpack = []
# userInput1 = input("What would you like to add to your backback?") 
# userInput2 = input("Now add something else to your backback") 
#
# backpack.append(userInput1)
# backpack.append(userInput2)
#
# print (backpack)

#
# Task 3: List Concatenation and Repetition
# Create list a = [1, 2, 3] and list b = [4, 5, 6]. Create a new list c by
# adding a and b together. Then create a new list d by repeating list a three
# times. Print both c and d. Then explain in a comment the difference between
# using + and using .extend().
# Sample output:
# 1
# Concatenated list c: [1, 2, 3, 4, 5, 6]
# Repeated list d: [1, 2, 3, 1, 2, 3, 1, 2, 3]


# lista = [1,2,3]
# listb = [4,5,6]
# listc = lista + listb
#
# print (listc) 
#
# listd = lista * 3 
# print (listd)

# Task 4: Finding Index of an Element
# Create a list fruits = ["apple", "banana", "cherry", "banana",
# "grape"]. Ask the user to enter a fruit name. If the fruit exists in the
# list, print the index of its first occurrence. If it does not exist, print a message
# saying “Not found”.
# Sample output:
# Enter a fruit: banana
# First occurrence of banana is at index 1
# Another run:
# Enter a fruit: orange
# Not found

fruits = ["apple", "banana", "cherry", "banana", "grape"]

userFruitRequest = input("What fruit do you want?") 
count = 0 
for fruit in fruits: 
    if userFruitRequest == fruit: 
        print(f"We found {fruit} in index {count+1}")
        break
    else: 
        count =+1 
else: 
    print (f"We couldn't find {userFruitRequest} ")
