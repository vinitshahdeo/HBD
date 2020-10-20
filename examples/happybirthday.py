c=int(input("Enter your age: "))
n=c-1
u=1
i=0
while i<c:
          i+=1
          for line in range (n):
                    print('  ',end="")
          for lines in range (u):
                    print('||',end="")
          print ("")
          u+=2
          n-=1
for k in range (n):
          print ('  ',end="")
print ("")
print ("HAPPY"+' '+str(c)+' '+"TH"+' '+ "BIRTHDAY!")
 
