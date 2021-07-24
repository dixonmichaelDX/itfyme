class Car:
    def __init__(self,name,brand):
        self.name=name  
        self.brand=brand
    def fun(self):
        print("i m inside a function")
def main():
    c = Car("nano","bmw")
    print(c)
    print(c.name,c.brand)
    c.fun()
if __name__== "__main__":
    main()




# public class car{
#     private string brand;
#     private string name;
# } 
# car(){
#     psys(fghjkl)
# } 

   