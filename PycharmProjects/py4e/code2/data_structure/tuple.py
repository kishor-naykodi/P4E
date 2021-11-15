point = (1, 2)
point = 1, 2
point = 1,
point = ()
point = (1, 2) + (3,)
x, y, z = point

point = (1, 2) * 3
point = tuple("Hello")
print(type(point))
print(point)
print(point[0])
print(x, y, z)

if 2 in point:
    print("Exists.")

# point[0] = 1  //Tuples are immutable
