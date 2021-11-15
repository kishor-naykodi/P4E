from sys import getsizeof

values = (x*2 for x in range(1000))
print("gen:", getsizeof(values))
# print(values)
values = [x*2 for x in range(1000)]
print("list:", getsizeof(values))

# getting values from generator
# for x in values:
#     print(x)
