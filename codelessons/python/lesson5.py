# Task 6: Removing Elements – remove(), pop(), and clear()
# Start with a list letters = ['a', 'b', 'c', 'd', 'e']. Do the following
# steps in order: 1. Use remove() to delete 'c' from the list and print the list. 2.
# Use pop() with no index to remove the last element and print both the removed
# element and the list. 3. Use pop(0) to remove the first element and print both
# the removed element and the list. 4. Use clear() to empty the list and print
# the list.
# Sample output:
# 2
# After remove('c'): ['a', 'b', 'd', 'e']
# Popped last element: e
# After pop(): ['a', 'b', 'd']
# Popped first element: a
# After pop(0): ['b', 'd']
# After clear(): []
#
# letters = ['a', 'b', 'c', 'd', 'e']
#
# #1
# letters.remove("c")
# print ("removing letter c... ", letters)
#
# #2
# popped_item = letters.pop()
# print(letters)
# print("popped items:", popped_item)
#
# popped_item = letters.pop(0)
#
# print("Second popped items:", popped_item)
# print(letters)
# letters.clear()
# print("cleared letters...", letters)


# Task 7: Checking Membership (in operator)
# Create a list allowed_colors = ["red", "green", "blue"]. Ask the user to
# enter a color. Use the in operator to check if the color is in the list. If it is,
# print “Allowed”. If not, print “Not allowed”.
# Sample output:
# Enter a color: green
# Allowed
# Another run:
# Enter a color: yellow
# Not allowed

# allowed_colours = ["red", "green", "blue"]
# user_colour = input("What is your colour?")
#
# if user_colour in allowed_colours:
#     print("allowed")
# else:
#     print("not allowed")


# Task 8: Sorting Lists – sort() vs sorted()
# Create a list scores = [88, 72, 95, 60, 85, 72]. Perform the following: 1.
# Use sorted() to create a new list called sorted_scores and print it. Also print
# the original scores list to show it unchanged. 2. Use .sort() on the original
# scores list and print it again to show it has been modified.
# Sample output:
# Sorted copy using sorted(): [60, 72, 72, 85, 88, 95]
# Original list unchanged: [88, 72, 95, 60, 85, 72]
# After using .sort(): [60, 72, 72, 85, 88, 95]

# scores = [88, 72, 95, 60, 85, 72]
#
# newScores = sorted(scores)
#
# print(newScores)
# print(scores) 
#
# scores.sort()
# print(scores)
#


# Task 9: List Slicing and Reversing
# Create a list numbers = [10, 20, 30, 40, 50, 60, 70, 80]. Print the following slices: - Elements from index 2 to 5 (not including 5) - Elements from
# the beginning to index 4 (not including 4) - Elements from index 3 to the end -
# Every second element from the whole list - The list reversed using slicing with
# a negative step
# Sample output:
# 3
# Index 2 to 5: [30, 40, 50]
# Beginning to index 4: [10, 20, 30, 40]
# Index 3 to end: [40, 50, 60, 70, 80]
# Every second element: [10, 30, 50, 70]
# Reversed using slicing: [80, 70, 60, 50, 40, 30, 20, 10]
#
#
# numbers = [10, 20, 30, 40, 50, 60, 70, 80]
# print(numbers[1:4])
# print(numbers[0:2])
# print(numbers[2::]) 
# print(numbers[1::2])
# print(numbers[::-1])

# Task 10: Copying Lists Correctly and Using sum(), min(), max()
# Create a list grades = [85, 92, 78, 90, 88]. Perform the following: 1. Create a copy of grades using .copy() and call it grades_copy. Append 100 to
# grades_copy and print both lists to show they are independent. 2. Then, incorrectly assign grades to a new variable grades_wrong = grades and append 95
# to grades_wrong. Print grades again to show it was also modified. 3. Finally,
# print the sum, minimum, and maximum of the original grades list.
# Sample output:
# After copying and modifying copy:
# grades: [85, 92, 78, 90, 88]
# grades_copy: [85, 92, 78, 90, 88, 100]
# After wrong assignment and modification:
# grades (unintentionally changed): [85, 92, 78, 90, 88, 95]
# Sum of grades: 433
# Minimum grade: 78
# Maximum grade: 95


# grades = [85, 92, 78, 90, 88]
# grades_copy = grades.copy()
# grades_copy.append(100)
# print(grades)
# print(grades_copy)
# grades_wrong = grades.copy()
# grades_wrong.append(95)
# print(grades_wrong)
# print(min(grades), max(grades), sum(grades))



