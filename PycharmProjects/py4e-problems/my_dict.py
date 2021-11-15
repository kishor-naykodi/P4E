# Ditionary Exercise 1

d1={
    "Mutable":"can change",
    "Immutable":"Cannot change",
    "Cs_terms":{"Variables":"A variable is nothing but a name given to a storage area","List":"Special type of DS","C++":"Computer Language"}
}
print("Enter the key whosevalue you want to know")

print(d1.keys())

inp=input().capitalize()

print(d1[inp])