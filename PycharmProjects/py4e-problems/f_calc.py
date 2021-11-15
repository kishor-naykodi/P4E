# Simple calculator for fun Exercise 2

print("Welcome dear user!!!")
print("Which operation did you want to perform")
print(f"1.Addition\n"
      f"2.substraction\n"
      f"3.multiplication\n"
      f"4.Division"
      )

inp=input("Enter a symbol which operation you want to perform.\n")
print("Enter two numbers that you want to ",inp)
a=int(input())
print(inp)
b=int(input())

if(inp=="+"):
    if(a==56 and b==9):
        print("The addition is 77")
        exit()
    print("The addition is ",a+b)
elif(inp=="-"):
    print("The substraction is ",a-b)
elif(inp=="*"):
    if(a==45 and b==3):
        print("The multiplication is 555")
        exit()
    print("The multiplication is ",a*b)
elif(inp=="/"):
    if(a==56 and b==6):
        print("The addition is 4")
        exit()
    print("The division is ",a/b)
else:
    print("You have entered wrong operation")
