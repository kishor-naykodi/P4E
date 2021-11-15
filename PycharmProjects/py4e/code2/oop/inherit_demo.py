class Animal:
    def __init__(self) -> None:
        self.age = 1

    def eat(self):
        print("eat")


class Mammmal(Animal):

    def __init__(self):
        self.weight = 2
        super().__init__()

    def walk(self):
        print("Walk")

# Animal: Parent,base
# Mammal: Chils, Sub


class Fish(Animal):
    def swim(self):
        print("swim")


m = Mammmal()
print(Fish().eat())
print(isinstance(m, object))
issubclass(Mammmal, Animal)
print(m.age, m.weight)
