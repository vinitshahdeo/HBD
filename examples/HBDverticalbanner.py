# Created by Samarth Kumar

import time as t                      # Timings for better appeal

a='Happy   '
b='Birthday'

x=len(b)

# Main Functionality
for i in range(len(a)):
    for j in range(len(b)):
        for k in range(x):
            t.sleep(0.8)
            print(a[k],'  ',end=" ")
            t.sleep(0.8)
            print(b[k])
        break
    break


print('\t','.',end=" ")
t.sleep(0.5)
print('.',end=" ")
t.sleep(0.5)
print('.',end=" ")
t.sleep(0.5)
print('.',end=" ")
t.sleep(0.5)
print('.',end=" ")
t.sleep(0.5)
print('.',end=" ")
t.sleep(0.5)
print('.',end=" ")


# Printing a Heart
t.sleep(0.5)
print('<',end="")
t.sleep(0.5)
print('3')