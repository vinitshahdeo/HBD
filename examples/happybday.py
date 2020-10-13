j=int(input("Input the number of Layers"))
n=j-1
y=n
u=1
i=0
print("\n \n")
while i<j:
    i+=1
    for z in range (n):
    	print('  ',end="")
    for q in range (u):
        print('||',end="")
    print ("")
    u+=2
    n-=1
 
for k in range (y):
    print ('  ',end="")
print ("")
print ("HAPPY BIRTHDAY")