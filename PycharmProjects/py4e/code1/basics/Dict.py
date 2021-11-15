# Ditionary is nothing but key value pairs
a=(1,2,3)
d1={
    "mutable":"can change",
    "Immutable":"Cannot change",
    "Fruits":{"Mango":"The king of fruits","Banana":"The gym fruit must eat","Apple":"Most healty fruit"}
}
print("Enter the key whosevalue you want to know")
print(d1.keys())
inp=input()
print(d1[inp])