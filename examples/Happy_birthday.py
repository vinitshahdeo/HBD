import sys
import time

text = "Happy Birthday"
upperstr = text.upper()
lowerstr =text.lower()
for x in range (3*len(lowerstr)):
    if(text[x%len(lowerstr)].islower()):
        s = text[0:(x%len(lowerstr))] + upperstr[x%len(lowerstr)] + text[(x%len(lowerstr))+1:] + '\r'
    else:
        s = text[0:(x%len(lowerstr))] + lowerstr[x%len(lowerstr)] + text[(x%len(lowerstr))+1:] + '\r'   
    sys.stdout.write(s)
    sys.stdout.flush()
    time.sleep(0.1)
