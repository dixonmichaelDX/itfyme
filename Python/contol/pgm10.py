totalNClass=int(input("entrer the total num of class conducted"))
attendedClass=int(input("entrer total num of class attended"))
per=(attendedClass/totalNClass)*100

if(per>75):
    
    print("Allowed to sit for exam ")
else:
  print(" not Allowed to sit for exam ")