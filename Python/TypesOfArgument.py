#positional argument
def power_of(a,b):
    c = a**b
    return c
print(power_of(2,5))
#defaulyt argument
def power_ofd(a,b=2):
    c = a**b
    return c
print(power_ofd(2))
#Keyword argumment
def powe_ofK(a,b) :
    c = a**b
    return c
print(powe_ofK(b=5,a=3))  
#variable length argument
def pizza_topping(*topping) :
    print(topping)
    print(type(topping))
pizza_topping("cheese","omnion","olives","corn")

#variable keyword length argument or orbitrary keyword length argument
def collect_student_data(**data):
    print(data)
    print(type(data))
collect_student_data(name="saurav",age=25,gender="male")