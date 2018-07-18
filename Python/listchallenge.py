#List challenge

#Level1
import random

first_names = ["Albert", "Thomas", "Ada", "Isaac"]
last_names = ["Einstein", "Edison", "Lovelace", "Newton"]

full_name = random.choice (first_names)+ " "+ random.choice (last_names)
print (full_name)


#Level 2
import random

sides = ["french fries", "mashed potatoes", "corn on the cob"]
main_courses = ["hamburger", "pasta", "tuna sandwich", "chicken", "fried rice"]
desserts = ["chocolate cake", "icecream", "brownies", "candy", "cookies"]

full_meal = random.choice(sides) + ", "+ random.choice(main_courses) + ", "+random.choice(desserts)
print(full_meal)


#Level 3
import random

first_line = ["an old pond", "salt water splashing", "gracefully it goes", "playful grasshopper"]
second_line = ["a frog jumps in-", "in a stunning flower field", "birds flying freely and wild", "making faces in the sky"]
third_line = ["the sound of water", "also butterflies!", "over horizons", "marching like soldiers"]

print (random.choice(first_line))
print (random.choice(second_line))
print (random.choice(third_line))


#Level 4
import random
words = ["an", "old", "pond", "salt", "water", "splashing", "gracefully", "it", "goes", "playful", "grasshopper", "like", "marching", "over"]
syllables = [1,1,1,1,1,2,3,1,1,2,3,1,2,1]

print()
