######################################
# _____                      ______ _      _   _         _             
#/  __ \                     | ___ (_)    | | | |       | |            
#| /  \/_ __ __ _ _____   _  | |_/ /_ _ __| |_| |__   __| | __ _ _   _ 
#| |   | '__/ _` |_  / | | | | ___ \ | '__| __| '_ \ / _` |/ _` | | | |
#| \__/\ | | (_| |/ /| |_| | | |_/ / | |  | |_| | | | (_| | (_| | |_| |
# \____/_|  \__,_/___|\__, | \____/|_|_|   \__|_| |_|\__,_|\__,_|\__, |
#                      __/ |   ~Crazy Birthday~                   __/ |
#                     |___/   by joshuqa aka Roni                |___/ 
#
# GitHub: https://github.com/nobalpha
######################################

import random

# Contstants
candle_width = 2
candle_height = 4
space_width = 2

# Pre-function calls
alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
arr = list("Happy Birthday")
random.shuffle(arr)

# Input
name = input("Whom I'm wishing happy birthday? : ")
age = int(input("How old are you? : "))

# Deriveds
space_count = age + 1
cake_height = 2 * candle_height
height = cake_height + candle_height
width = (candle_width * age) + (space_width * space_count)

# Crazy Celebration
print("")
print("".join(arr), name)
print("")

## Birthday Cake section

# Candle section
for _ in range(candle_height):
    print(" " * space_width, end="")
    for _ in range(age):
        for i in range(candle_width):
            print(alp[random.randint(0,len(alp)-1)], end="")
        print(" " * space_width, end="")
    print("")

# Cake section
for _ in range(cake_height):
    for _ in range(width):
        print(alp[random.randint(0,len(alp)-1)], end="")
    print("")
