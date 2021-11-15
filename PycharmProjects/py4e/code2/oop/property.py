class Product:
    def __init__(self, price) -> None:
        self.price = price

    @property
    def price(self):
        return self.__price

    @price.setter
    def price(self, value):
        if value < 0:
            raise ValueError("Price cannot be negative.")
        self.__price = value


product1 = Product(11)
product1.price = 22
print(product1.price)
