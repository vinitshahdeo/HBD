class EightSegmentDisplay:

    codeMapping = {
        "H" : "0111110",
        "A" : "1111110",
        "P" : "1111100",
        "Y" : "0111011",
        "B" : "0101111",
        "I" : "0100100",
        "R" : "0001100",
        "T" : "0101101",
        "D" : "0011111",
        " " : "0000000"
            }

    def displayWord(self,word):
        codes = []

        bad = False

        for letter in word:
            code = self.codeMapping[letter]
            if(code is None): 
                bad = True
                break
            codes.append(code)

        if bad : return

        for code in codes:
            self.display(code)



    
    def display(self,code):
        ''' 
        The idea with this function is to use 0 and 1 for on and off. There are 8 parts to a 8 segment display
              -          1
             | |        2 3 
              -          4
             | |        5 6
              -          7

        The code provided should be 8 lenght long indicating the state of every segment.
        '''

        if len(code) != 7: return;

        segments = []
        broken = False

        for i in code:
            if(i != "0" and i != "1"):
                broken = True
                break
            segments.append(i =="1")

        if(broken): return

        if(segments[0]): print(" -- ", end = "")
        print("")
        if(segments[1]): print("|", end="") 
        else: print(" ", end="")
        print("  ", end="") 
        if(segments[2]): print("|", end = "")
        else: print(" ", end="")
        print("")
        if(segments[3]): print(" -- ", end = "")
        print("")
        if(segments[4]): print("|", end="") 
        else: print(" ", end="")
        print("  ", end="") 
        if(segments[5]): print("|", end= "")
        else: print(" ", end="")
        print("")
        if(segments[6]): print(" -- ", end = "")
        print("")
        print("")




circuit = EightSegmentDisplay()

#circuit.display("0111110")
circuit.displayWord("HAPPY BIRTHDAY")

