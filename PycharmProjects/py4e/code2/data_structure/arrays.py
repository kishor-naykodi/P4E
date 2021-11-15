from array import array

numbers = array('i', [1, 2, 3, 4, 5])
numbers.append(3)
numbers.insert(2, 3)
numbers.remove(2)
print(numbers)
# numbers[0] = 1.0 //cant assign floating value
