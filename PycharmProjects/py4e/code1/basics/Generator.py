
"""
Iterable - __iter__() or __getitem__()
Iterator - __next__()
Iteration -

"""

def gen(n):
    for i in range(n):
        yield i

g = gen(3)
# print(g.__next__())
# print(g.__next__())
# print(g.__next__())
# print(g.__next__())


# for i in g:
#     print(i)

h = "The Hacker. Hack the world."
ier = iter(h)

for str in range(27):
    print(ier.__next__())

# for c in h:
#     print(c)
