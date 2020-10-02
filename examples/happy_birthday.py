import base64
import string
import time

s = base64.b64decode("SGFwcHkgYmlydGhkYXkh").decode()
res = "- "

for letter in s:
    for p in string.printable:
        print(res+p, end='\r')
        
        if p == letter:
            res += p
            break

        time.sleep(0.02)

print("")