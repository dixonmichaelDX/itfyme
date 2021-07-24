name=input("enter the name")
id=int(input("enter the id")) 
units=int(input("enter the unit")) 
if(units>0 and units<=199):
   eb=units*1.20
elif(units>=200 and units<400):
   eb=units*1.50
elif(units>=400 and units<=600):
   eb=units*1.80
else:
    eb=units*2
if(eb>400):
    eb=eb+eb*0.15
    print('electricity=',eb)
elif(eb<100):
    eb=100
    print('electricity=',eb)
else:
    print('electricity=',eb)






