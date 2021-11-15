class Point:
    default_color = "red"

    def __str__(self) -> str:
        return f"({self.x},{self.y})"

    def __init__(self, x, y) -> None:
        self.x = x
        self.y = y

    @classmethod
    def zero(cls):
        return cls(0, 0)

    def draw(self):
        print(f"Point({self.x},{self.y})")


# point = Point(1, 2)
# print(isinstance(point, Point))
# point.draw()
# print(type(point))
# point.z = 3
# print(point.z)

# class and instance attributes
# print(point.default_color)
# point.default_color = "sky_blue"
# print(Point.default_color)
# print(point.default_color)

# class and instance methods
point = Point.zero()
point.draw()
print(point)
