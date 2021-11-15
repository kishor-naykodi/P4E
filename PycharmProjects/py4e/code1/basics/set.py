list=[1,2,3,4,5,5,4,3,2,1]
print(list)
s=set(list)
print(s)

# some functions in set

s1 = set([5,7,9,1,3]) #We made empty list
print(s1)
s1.add(10)
s1.remove(9)
s1.pop()
s2=s1.intersection(s)
print(s1,s2)