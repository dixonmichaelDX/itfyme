side1=int(input("enter the 3 sides"))
side2=int(input())
side3=int(input())
if(side1+side2>side3  and side2+side3>side1 and side3+side1>side2):
    if(side1==side2 and side2==side3):
        print("quilateral triangle")
    elif(side1==side2 or side3==side1 or side2==side3 ):
        print("isoceles")
    else:
        print("scalene")
else:
    print("cant form the triangle")


