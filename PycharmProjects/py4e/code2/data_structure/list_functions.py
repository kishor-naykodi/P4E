# List Sorting Using sort and sorted.
list1 = [23, 14, 9, 45, 65]
list2 = [1, 2, 3, 4, 5]
# list1.sort()
# sortedList = sorted(list1, reverse=True)
# print(sortedList)

items = [
    ("Product1", 11),
    ("Product2", 9),
    ("Product3", 15)
]
# sorting using lambda funtion
# items.sort(key=lambda item: item[1])
# print(items)

# map function
# prices = list(map(lambda item: item[1], items))
# prices = [item[1] for item in items]   //List Comprehension
# print(prices)

# Filter function
# filtItems = filter(lambda item: item[1] >= 10, items)
# filtItems = [item for item in items if item[1] > 10]
# print(list(filtItems))

# zip
result = zip("abc", list1, list2)
print(list(result))
