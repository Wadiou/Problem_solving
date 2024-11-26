from math import*
def max(n1,n2,n3,n4):
    if n1 >= n2 and n1 >= n3 and n1 >= n4:
        print(str(n1) + " is the greatest number")
    elif n2 >= n1 and n2 >= n3 and n2 >= n4 :
        print(str(n2) + " is the greatest number")
    elif n3 >= n1 and n3 >= n2 and n3 >= n4:
        print(str(n3) + " is the greatest number")
    else :
        print(str(n4) + " is the greatest number")
max(1,4,3,4)
