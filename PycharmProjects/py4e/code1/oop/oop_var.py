
class Employee:
    no_of_leaves = 8
    pass

harry = Employee()
rohan = Employee()

harry.name = "Harry"
harry.salary = 455
harry.role = "Instructor"

rohan.name = "Rohan"
rohan.salary = 4554
rohan.role = "Student"

print(Employee.no_of_leaves)
print(Employee.__dict__)
rohan.no_of_leaves = 9
print(rohan.__dict__)
print(rohan.no_of_leaves)
print(Employee.no_of_leaves)
