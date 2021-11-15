#Code for telling when the user will complete his century and also checking the age of person in particular year.

def getInput():

    while(True):
        try:
            global yearAge
            yearAge = int(input("Enter your age or birth year : "))
            if(yearAge > 125 and yearAge < 1000):
                print("This is not valid age or birth year enter again")
                continue
            return yearAge
        except:
            print("You have entered wrong input.Try again")
            continue

def century():
    global yearAge
    isYear = False
    isAge = False

    if len(str(yearAge)) == 4:
        isYear = True
    else:
        isAge = True

    if (yearAge < 1900 and isYear):
        print("You seem to be the oldest person alive")
        exit()

    if (yearAge > 2019):
        print("You are not yet born")
        exit()

    if isAge:
        yearAge = 2021 - yearAge

    print(f"You will be 100 years old in {yearAge + 100}")

def ageIn():
    global yearAge
    flag = True
    while(flag):
        interestedYear = input("Enter the year you want to know your age in\n")
        if len(str(interestedYear)) == 4:
            try:
                interestedYear = int(interestedYear)
                print(f"You will be {interestedYear - yearAge} years old in {interestedYear}")
                break
            except:
                print("You have entered invalid input try again")
                continue

        else:
            print("Enter Valid Year.")
            continue


if __name__ == "__main__":
    yearAge = 0

    while(True):
        print("*************Menu**************")
        print("1.Press 1 for entering age or year.")
        print("2.Press 2 for checking when you are 100 years old.")
        print("3.Press 3 for checking your age in particular year.")
        print("4.Press Q/q Quitting program.")
        inp = input()
        if inp == '1':
            getInput()
            continue
        elif inp == '2':
            century()
            continue
        elif inp == '3':
            ageIn()
            continue
        elif inp == 'q' or inp == 'Q':
            print("Quitting...")
            exit()
        else:
            print("Enter valid input.")
            continue