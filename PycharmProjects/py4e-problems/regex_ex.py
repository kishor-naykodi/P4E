# program to find the emails

import re

file = open("Regex.txt","r+")

str = file.read()

email = re.findall(r"[a-zA-Z0-9_.-]+@[a-zA-Z0-9_.-]+\.[a-zA-Z]+",str)

print(email)

