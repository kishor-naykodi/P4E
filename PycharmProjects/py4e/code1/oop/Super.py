class A:
    classvar1 = "I am a class variable in class A"
    def __init__(self):
        self.var1 = "I am inside class A's constructor"
        self.classvar1 = "Instance var in class A"
        self.special = "Special"

class B(A):
    classvar1 = "I am in class B"

    def __init__(self):
        # super().__init__()
        super(B, self).__init__()       #You can also use super method like this
        self.var1 = "I am inside class B's constructor"
        self.classvar1 = "Instance var in class B"

        # print(super().classvar1)


a = A()
b = B()

print(b.special, b.var1, b.classvar1)
