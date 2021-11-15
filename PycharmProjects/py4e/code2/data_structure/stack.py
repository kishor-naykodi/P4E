import random
browsing_session = []

print("Enter n->next, b->back, q->quit")
inp = ""
while(inp != "q"):
    inp = input("inp>> ")
    if inp.lower() == "n":
        browsing_session.append(random.randint(1, 100))
    elif inp.lower() == "b":
        if not browsing_session:
            print("Cant Navigate back. Browse another sites.")
            continue
        browsing_session.pop()
    elif inp.lower() == "h":
        print("Browsing History: ", browsing_session)
    elif inp.lower() == "q":
        break
    else:
        print("Enter valid input")
