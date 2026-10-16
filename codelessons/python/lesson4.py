# # Task 1: The Guest List VIP Upgrade
# # Goal: Manage a party guest list by adding a VIP, removing a cancelled guest, and separating the VIPs from the regular guests.

# # Setup: Start with this list of guests: guests = ["Alice", "Bob", "Charlie", "David"]

# # Your Instructions:

# # A new VIP guest, "Eve", needs to be added to the end of the list.

# # "Charlie" called and cancelled. Remove him from the list.

# # Because "Eve" is a VIP, she needs to be moved to the very front. 
# # Use slicing and list concatenation to create a new list where "Eve" is first, followed by the rest of the 
# # remaining guests.

# # Expected Output: ['Eve', 'Alice', 'Bob', 'David']

# guests = ["Alice", "Bob", "Charlie", "David"]

# guests.append("Eve")
# guests.remove("Charlie")

# newGuests = guests[-1:-2:-1]
# guests = newGuests + guests
# guests.pop()

# print(guests)



# Task 5: The High Score Leaderboard
# Goal: Update a video game leaderboard with a new score, remove a banned player, and sort the scores to find 
# the top players.

# Setup: Start with this list of un-ordered high scores: scores = [1500, 3200, 900, 2400]

# Your Instructions:

# A new player just finished a game. Use .append() to add the score 1800 to the end of the list.

# The score 900 was flagged as a cheater's score. Use .remove() to get rid of it.

# Use the sorted() function to sort the remaining scores in descending order (highest to lowest) and save this 
# to a new variable called leaderboard. (Hint: Look into the reverse=True argument for sorted()).

# Use slicing on your new leaderboard list to grab the top 2 highest scores.

# Expected Final Output: [3200, 2400]

scores = [1500, 3200, 900, 2400]
scores.append(1800)
scores.remove(900)

leaderboard = sorted(scores, reverse=True)
print (leaderboard)
topScores = leaderboard[0:2]
print(topScores)

