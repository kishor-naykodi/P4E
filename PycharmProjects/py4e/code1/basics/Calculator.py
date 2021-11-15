# Simple calculator for fun
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
    print("The addition is ",a+b)
elif(inp=="-"):
    print("The substraction is ",a-b)
elif(inp=="*"):
    print("The multiplication is ",a*b)
elif(inp=="/"):
    print("The division is ",a/b)
else:
    print("You have entered wrong operation")
