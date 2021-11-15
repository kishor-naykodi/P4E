# Pattern printing Exercise 4

print("********Pattern Printing***************")

inp = int(input("Enter which pattern you to print 1 for true and 0 for false\n"))

if(inp==1):
    for i in range(0,4):
        for j in range(0,4):
            if(i<=j):
                print("*",end=" ")
        print()
else:
    for i in range(0,4):
        for j in range(0,4):
            if(i>=j):
                print("*",end=" ")
        print()
