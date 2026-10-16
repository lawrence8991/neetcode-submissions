from random import randint as ri 
#
#
# def roll_dice(): 
#   roll = ri(1, 6) 
#   print(f"you rolled a {roll}")
#
# roll_dice()

# def power_user(username : str, power_level : int) -> str: 
#     if power_level < 10: 
#         print("weak") 
#     elif power_level <50: 
#         print("moderate") 
#     else: 
#         print("legendary")
#
# power_user("zara", 75) 
#

# def to_fahrenheit(celsius : int) -> int: 
#     #enter celsius
#     fahrenheit = (celsius * 9 / 5) + 32
#     return fahrenheit
#
# userTempInC = int(input("enter a temp in celsius")) 
#
# userTempInF = to_fahrenheit(userTempInC) 
# print(f"{userTempInC} is equal to {userTempInF}")

# def shopping_cart(item : str) -> str: 
#     cart = [] 
#     cart.append(item) 
#     print(cart) 
#
# shopping_cart("apple") 
# shopping_cart("pear") 

# score = 0 
#
#
# def earn_points(points_earned : int):
#     global score 
#     score += points_earned 
#
# def lose_points(points_lost : int): 
#     global score 
#     score -= points_lost
#
# earn_points(10)
# lose_points(3) 
# earn_points(5) 
#
# print(score) 


# def best_two(*args): 
#     local_list = [] 
#
#     if len(args) < 2: 
#         return None, None
#     else:
#         local_list = list(args)
#         local_list.sort()
#         return local_list[-1],local_list[-2]
#        
#
# result = best_two(45, 67, 89, 23, 90)
# print(result)

# def build_profile(**kwargs): 
#     profile = "profile:"
#     for key, value in kwargs.items():
#         profile += f"{key}={value}, "
#    
#     return profile
#    
# jim = build_profile(name = "jim", age = 12, city = "new york")
# print (jim)
#
#


