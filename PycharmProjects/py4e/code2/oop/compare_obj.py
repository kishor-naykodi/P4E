class Point:
    def __init__(self, x, y) -> None:
        self.x = x
        self.y = y

    def __eq__(self, other) -> bool:
        return self.x == other.x and self.y == other.y

    def __gt__(self, other):
        return self.x > other.x and self.y > other.y

    def __add__(self, other):
        return f"Point({self.x + other.x},{self.y+other.y})"


point1 = Point(1, 2)
point2 = Point(2, 3)

print(point1 == point2)
print(point2 > point1)
print(point1 + point2)
