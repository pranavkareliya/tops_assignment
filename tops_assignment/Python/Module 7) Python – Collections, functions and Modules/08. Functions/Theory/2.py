# Different types of functions: with/without parameters, with/without return values.

def index():
    print("This Function is Without Parameter and without Return.")
index()

def index2():
    return "This Function is Without Parameter and with Return."
print(index2()) 

def index3(a,b):
    print("Addition is ",a + b)
    print("This Function is with Parameter without Return.")
index3(10,30)

def index4(a,b):
    return a + b
print(index4(40,60))