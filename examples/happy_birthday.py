'''
@author khusharth
'''

def encrypt(text,s): 
    result = "" 
  
    # traverse text 
    for i in range(len(text)): 
        char = text[i] 
  
        # Dencrypt uppercase characters 
        if (char.isupper()): 
            result += chr((ord(char) - s-65) % 26 + 65) 
        
        # For space
        elif (char == " "):
            result += " "
  
        # Decrypt lowercase characters 
        else: 
            result += chr((ord(char) - s - 97) % 26 + 97) 
  
    return result 
  
cipher = "Unccl Oveguqnl"
s = 13 # Shift
print(encrypt(cipher,s)) 
