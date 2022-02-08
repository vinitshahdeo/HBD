string = "GeeksforGeeks"
  
# using join() + ord() + format() 
# Converting String to binary 
res = ''.join(format(ord(i), 'b') for i in string) 
  
# printing result  
print(res) 