from math import*
def quadra(a,b,c):
    delta=b*b -4*a*c
    x1=(-b + sqrt(delta))/(2*a)
    x2=(-b - sqrt(delta))/(2*a)
    if delta  > 0 :
        print("the first root is " + str(x1) + " and the second root is " + str(x2))
    elif delta == 0 :
        print("the is just one root which is " + str(x1))
    else :
        print("there is no real roots ")
quadra(4,-1,-3)       
   