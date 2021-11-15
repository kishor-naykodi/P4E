n = int(input("Enter a no of apples you have"))
mn = int(input("Enter value for mn : "))
mx = int(input("Enter value for mx : "))

if __name__ == "__main__":
    if(mn==mx):
        print("You have entered same values for mn and mx its not range.")
        if (n % mn == 0):
            print(f"Apples you have can be distributed in {mn} students.")
        else:
            print(f"Apples you have cannot be distributed in {mn} students.")
    else:
        for i in range(mn,mx+1):
            if(n%i==0):
                print(f"Apples you have can be distributed in {i} students.")
            else:
                print(f"Apples you have cannot be distributed in {i} students.")
