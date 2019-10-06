sample_string = "HappyBirthday"
  

print("The original string is : " + str(sample_string)) 
  

result = ''.join(format(ord(i), 'b') for i in sample_string) 
  
 
print("The string after binary conversion : " + str(result)) 
