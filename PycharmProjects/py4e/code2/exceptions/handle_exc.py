try:
    with open("../myfile.txt") as file:
        print("File opened.")
    age = int(input("Age: "))
    xFactor = 10 / age
except (ValueError, ZeroDivisionError):
    print("You didn't enter a valid age.")
except FileNotFoundError:
    print("No such file present.")
else:
    print("No Exception were thrown.")
finally:
    # Finally block always executed
    print("Execution done.")
