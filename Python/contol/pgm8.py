salary=int(input("entrer the salary"))
service=int(input("entrer the service"))

if(service>5):
    salary=salary+salary*0.05
    print("total salary=",salary)
else:
   print("total salary",salary)