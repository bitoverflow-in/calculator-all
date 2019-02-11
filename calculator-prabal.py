print("Welcome to Mini calculator\n")


def add(num1,num2):
    return(num1+num2)
def subtract(num1,num2):
    return(num1-num2)
def multiply(num1,num2):
    return(num1*num2)
def division(num1,num2):
    return(num1/num2)

while True:
    print("\nSelect your desired operator:-  "
          "\nA:Add "
          "\nB:Subtact "
          "\nC:Multiply "
          "\nD:Divide")



    operations=input("Select-A,B,C,D")



    num1=float(input("Enter First Number:  "))
    num2=float(input("Enter second Number:  "))

    if operations == "A":
        print( num1,"+",num2,"=",add(num1,num2))
    elif operations == "B":
        print(num1, "-", num2, "=", subtract(num1, num2))
    elif operations =="C":
        print(num1, "*", num2, "=", multiply(num1, num2))
    elif operations =="D":
        print(num1, "/", num2, "=", division(num1, num2))
    else:
        print("oops! Invalid operator.Please try again.")
