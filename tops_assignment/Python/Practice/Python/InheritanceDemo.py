# single Inheritance

class A:
    def getA(self,a):
        self.a=a
    def putA(self):
        print("Single A : ",self.a)

class B(A):
    def getB(self,b):
        self.b=b
    def putB(self):
        print("Single B : ",self.b)

b1 = B()
b1.getA(10)
b1.getB(20)
b1.putA()
b1.putB()

# Multilevel Inheritance

class A:
    def getA(self,a):
        self.a=a
    def putA(self):
        print("Multilevel A : ",self.a)

class B(A):
    def getB(self,b):
        self.b=b
    def putB(self):
        print("Multilevel B : ",self.b)

class C(B):
    def getC(self,c):
        self.c=c
    def putC(self):
        print("Multilevel C : ",self.c)

c1 = C()
c1.getA(10)
c1.getB(20)
c1.getC(30)
c1.putA()
c1.putB()
c1.putC()

# Multilevel Inheritance

class A:
    def getA(self,a):
        self.a=a
    def putA(self):
        print("Multiple A : ",self.a)

class B:
    def getB(self,b):
        self.b=b
    def putB(self):
        print("Multiple B : ",self.b)

class C(A,B):
    def getC(self,c):
        self.c=c
    def putC(self):
        print("Multiple C : ",self.c)

c2 = C()
c2.getA(100)
c2.getB(200)
c2.getC(300)
c2.putA()
c2.putB()
c2.putC()

# Hierarchy Inheritance

class A:
    def getA(self,a):
        self.a=a
    def putA(self):
        print("Hierarchy A : ",self.a)

class B(A):
    def getB(self,b):
        self.b=b
    def putB(self):
        print("Hierarchy B : ",self.b)

class C(A):
    def getC(self,c):
        self.c=c
    def putC(self):
        print("Hierarchy C : ",self.c)

class D(A):
    def getD(self,d):
        self.d=d
    def putD(self):
        print("Hierarchy D : ",self.d)

b1 = B()
c1 = C()
d1 = D()
b1.getA(100)
b1.getB(200)
c1.getC(300)
d1.getD(400)
b1.putA()
b1.putB()
c1.putC()
d1.putD()

# Hybrid Inheritance

class A:
    def getA(self,a):
        self.a=a
    def putA(self):
        print("Hybrid A : ",self.a)

class B(A):
    def getB(self,b):
        self.b=b
    def putB(self):
        print("Hybrid B : ",self.b)

class C(A):
    def getC(self,c):
        self.c=c
    def putC(self):
        print("Hybrid C : ",self.c)

class D(B,C):
    def getD(self,d):
        self.d=d
    def putD(self):
        print("Hybrid D : ",self.d)

d1 = D()
d1.getA(100)
d1.getB(200)
d1.getC(300)
d1.getD(400)
d1.putA()
d1.putB()
d1.putC()
d1.putD()
