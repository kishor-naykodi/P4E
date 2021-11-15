def fizz_buzz(input):
    if(input % 3 == 0 and input % 5 == 0):
        return "fizz_buzz"

    elif(input % 3 == 0):
        return "fizz"

    elif(input % 5 == 0):
        return "buzz"

    else:
        return input


print(fizz_buzz(7))
