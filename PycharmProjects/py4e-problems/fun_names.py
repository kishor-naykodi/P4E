import random;

def genSplitList(studList):
    splitList = []
    for studName in studList:
        name1 = studName.strip().split(" ")
        splitList.append(name1)
    return splitList

def fakeResultName(splitList):
    finalList = []
    for i in range(4):
        randInd = random.randint(0, 3)
        fName = splitList[i][0]
        lName = splitList[randInd][1]
        newName = f"{fName} {lName}"
        finalList.append(newName)
    return finalList

if __name__ == "__main__":
    # mathingWords("This is good", "python is good")
    StudentNames = ["Rohan Das", "Shubham Agarwal","Ritesh Arora", "Harry Potter"]

    print(f"Original result list : {StudentNames}")

    splitList = genSplitList(StudentNames)
    fakeStdNames = fakeResultName(splitList)

    print(f"Fake result list : {fakeStdNames}")
