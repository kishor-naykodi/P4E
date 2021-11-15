# Unpacking Operator
values = list(range(5))
values = [*range(5), *"abc"]
print(values)

# Concatinate multiple lists using unpack
first = [1, 2, 3]
second = [5, 6]
third = [*first, "a", *second, *"hello"]
print(third)

# Unpack operator on dictionary
first = {"x": 1}
second = {"y": 2, "z": 3}
combined = {**first, **second}
print(combined)
