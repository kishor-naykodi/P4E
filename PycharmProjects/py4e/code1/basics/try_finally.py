def divide(a, b):
    try:
        print(f'{a}/{b} is {a / b}')
    except ZeroDivisionError as e:
        print(e)
    else:
        print("No Exception")
    finally:
        print("This is finally & code here always executed.Whether exception occur or not.")
divide(1, 2)