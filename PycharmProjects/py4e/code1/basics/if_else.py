inp=input("Dear user please enter your age here: ")
age=int(inp)
if age>18 and age<100:
    print("Congrats you can drive")
elif age>100:
    print("You have entered wrong age")
elif age==18:
    print("Sorry we cant take decision for you plz meet personaly")
else:
    print("Sorry you cant drive")