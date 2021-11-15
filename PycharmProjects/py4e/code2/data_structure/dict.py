point = {"x": 1,
         "y": 2}
point = dict(x=1, y=2)

point["x"] = 10
point["z"] = 20
# print(point["a"]) gives keyerror if not present
print(point.get("a", -1))
del point["x"]
print(point)

# Simple for
# for key in point:
#     print(key, point[key])

# Using items()
for key, value in point.items():
    print(key, value)
