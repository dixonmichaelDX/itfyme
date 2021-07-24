count =0
while(count<3):
    print("enter the fist num greater")
    start = int(input("enter the range"))
    end = int(input("enter the range"))
    if (start < end):
        count +=1
        continue
    else:
        count = 3
        for i in range (start,end,-2):
            print("square of a number ",i,"",i*i)
        




