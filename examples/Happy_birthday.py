text="OhwwfIpyaokhf"
s=-7
result = ""
   # transverse the plain text
for i in text:
      # Encrypt uppercase characters in plain text
    if (i.isupper()):
        result += chr((ord(i) + s-65) % 26 + 65)
      # Encrypt lowercase characters in plain text
    else:
        result += chr((ord(i) + s - 97) % 26 + 97)
print( result)
