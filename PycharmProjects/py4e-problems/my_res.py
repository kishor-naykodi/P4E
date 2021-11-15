food = []


def getList():
    print("Welcome in Harry's Restaurant.")
    n = int(input("Enter how many items you have to purchase."))
    for i in range(0, n):
        print(f"Enter a {i + 1} food items : ")
        food.append(input())


def printItems():
    print(f"The List items before reversing : {food}")


def reverseListLogic():
    length = len(food)
    n = length//2
    temp = 0
    if length == 0:
        print("List is empty")
    else:
        for i in range(0, n):
            temp = food[i]
            food[i] = food[length-i-1]
            food[length-i-1] = temp
    print(food)


if __name__ == "__main__":
    getList()
    printItems()

    print("Reversing list using built in function.")
    l1 = food[:]
    l1.reverse()
    print(l1)

    print("Reversing list by slicing trick.")
    l2 = food[::-1]
    print(l2)

    print("Reversing list by user logic trick.")
    print(reverseListLogic())
