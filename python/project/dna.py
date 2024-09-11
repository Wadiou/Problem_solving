def switch(chain3):
    result3 = ""
    for code in chain3:
        if code.lower() in "a":
            result3 = result3 + "T"
        elif code.lower() in "t":
            result3= result3 + "U"
        elif code.lower() in "c":
            result3= result3 + "G"
        elif code.lower() in "g":
            result3= result3 + "C"
        else :
            result3 = result3 + " INVALID "    
    print ("the RNA chain is " + result3)
switch(input("enter the 3' dna chain : <if you dont have it skip> "))
def switch2(chain5):
    result5=""
    for code in chain5:
        if code.lower() in "acg":
            result5= result5 + code.upper()
        elif code.lower() in "t":
            result5= result5 + "U"    
        else:
            result5= result5 + " INVALID "
    print ("the RNA chain is " + str(result5))        

switch2(input("enter the 5' dna chain :"))    