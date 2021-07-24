temp=int(input("enter temp"))
if(temp<0):
    print("Freezing weather")
elif(temp>0 and temp<10):
   print("very cold weather")
elif(temp>10 and temp<20):
   print("cold weather")
elif(temp>30 and temp<40):
   print("normal weather")
else:
   print("Very hot weather")


