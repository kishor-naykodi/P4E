var1 = 10 # Global

def function1(n):
    #var1 = 5 #Local
    var2 = 8 #Local
    global var1
    var1 = var1 + 45
    print(var1, var2)
    print(n, "I have printed")

function1("This is me")
# print(var1)

# x = 89
# def harry():
#     x = 20
#
#     def rohan():
#         global x
#         x = 88
#
#     # print("before calling rohan()", x)
#     rohan()
#     print("after calling rohan()", x)
#
#
# harry()
# print(x)






