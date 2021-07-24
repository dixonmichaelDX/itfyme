unit=int(input("entrer the unit"))
cost=unit*100
if(cost>1000):
    cost=cost*0.9
    print("total cost=",cost)
else:
   print("totalcost",cost)