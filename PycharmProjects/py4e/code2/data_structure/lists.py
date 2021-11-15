letters = ["a", "b", "c", "d", "e"]
chars = list("Hello World")
# print(len(chars))
# print(letters[-1])
letters[0] = "A"
# print(letters[0:3])


matrix = [[0, 1], [2, 3]]

zeros = [0] * 3
combined = zeros + letters

numbers = list(range(20))
# print(numbers[::2])
# print(numbers[::-1])

first, *other, last = numbers
print(first, last)
print(other)
