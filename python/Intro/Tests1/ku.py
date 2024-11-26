password = 1604
countdown =0
countdownlim = 2
end = False
while password != 1606 and not(end):
    if float(countdown) <= float(countdownlim):
        password = float(input("guess the password"))
        countdown += 1
    else:
        end = True    
if end:
    print("failed!")
else:
    print("valid")    
    