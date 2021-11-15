letters = ["a", "b", "c", "d", "e"]
items = (0, 'a')
index, letter = items

# Doesn't give index
# for letter in letters:
#     print(letter)

# Here we get index
for index, letter in enumerate(letters):
    print(index, letter)
