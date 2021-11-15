f = open("file.txt", "r+")
content = f.read()
print(content)

# f.write(f"\nThis is write method.")

#Reading and Printing lines using for loop

# for line in f:
#     print(line, end="")

#Reading and Printing lines using readline() function

# print(f.readline(),end="")
# print(f.readline(),end="")
# print(f.readline())

# Readlines() function
# print(f.readlines())

f.close()