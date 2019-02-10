
choice = input("Enter\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n")

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

if choice == '1':
    print(num1, "+", num2, "=", num1 + num2)

elif choice == '2':
    print(num1, "-", num2, "=", num1 - num2)

elif choice == '3':
    print(num1, "*", num2, "=", num1 * num2)

elif choice == '4':
    try:
        print(num1, "/", num2, "=", num1 / num2)
    except ZeroDivisionError:
        print("Denominator can\'t be zero")

else:
    print("Input error")
