# userNumber = int(input("Please enter a number: "))

# sumOfNumbers = 0

# for i in range(1, userNumber + 1):
#     sumOfNumbers += i

# print(sumOfNumbers)


# userNumber = int(input("Enter a number "))

# evenNumbers = 0 
# for number in range(1, userNumber +1): 
#     if number % 2 == 0: 

#         evenNumbers += 1

# print(evenNumbers)


# numberToGuess = 7

# while True:
#     userInput = int(input("Enter your guess"))
#     if userInput == numberToGuess: 
#         break

# l = [4,3,6,7,9,0,4,3,5,2,1]
# lowerNumber = l[0] 

# for iterative in l: 
#     if iterative < lowerNumber:
#         lowerNumber = iterative
# print(lowerNumber)

# l = [4,3,6,7,9,0,4,3,5,2,1]

# largestNumber = l[0]
# secondLargestNumber = l[0]

# for i in l: 
#     if i > largestNumber: 
#         largestNumber = i

# l.remove(largestNumber)

# for i in l: 
#     if i > secondLargestNumber: 
#         secondLargestNumber = i
        
# print(largestNumber, secondLargestNumber)

# userInput = int(input("Please enter a number to check "))

# #Must be able to devide by iteself with no remainder 
# #must be able to devide by 1 with no remainder 

# if userInput % userInput != 0: 
#     print("not prime")
# elif userInput % 1 != 0:
#     print("not prime")
# else: 
#     print("prime") 
# n = int(input("Please enter a number:"))

# isPrime = True

# for divisor in range(2, n):
# if n % divisor == 0:
# isPrime = False
# break

# if isPrime == True:
# print(f"The number {n} is prime")
# else:
# print(f"The number {n} is NOT prime")

# numberToReverse = int(input("enter a number"))

# currentLastDigitOfNumber = numberToReverse % 10



# while numberToReverse > 0:
#     currentLastDigitOfNumber = numberToReverse % 10 
#     numberToReverse = int(numberToReverse / 10) 
#     print(currentLastDigitOfNumber, end = "")



# Example:
# List: [5, 3, 8, 1]
# Sorted list: [1, 3, 5, 8]
def bubble_sort(numbers_list):
    total_elements = len(numbers_list)
    
    for pass_number in range(0, total_elements):                                    # outer loop: one full pass per element
        for current_index in range(0, total_elements - pass_number - 1):            # inner loop: compare adjacent pairs
            if numbers_list[current_index] > numbers_list[current_index + 1]:       # if left element is greater than right
                temp_storage = numbers_list[current_index]                          # store left element temporarily
                numbers_list[current_index] = numbers_list[current_index + 1]       # put right element in left position
                numbers_list[current_index + 1] = temp_storage                     # put temp (old left) in right position
    
    return numbers_list

numbers_list = [5, 3, 8, 1]
print("List:", numbers_list)
print("Sorted list:", bubble_sort(numbers_list))