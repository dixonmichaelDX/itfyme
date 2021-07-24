p=int(input("enter pysics mark"))
c=int(input("enter chem mark"))
m=int(input("enter mathmark"))
if((p>55 and c>55 and m>55) and(p+c+m)>=175):
    print("eligible for admission")
else:
    print("not eligible for admission")

