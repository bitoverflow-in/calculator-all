#calulator programme in python3

#addtion two numbers 
def add(num1, num2): 
	return num1 + num2 

# subtraction two numbers 
def subtract(num1, num2): 
	return num1 - num2 

#multiplication two numbers 
def multiply(num1, num2): 
	return num1 * num2 

#division two numbers 
def divide(num1, num2): 
	return num1 / num2 


while True:
    
    print(""" Please select a oprator
                1.addition
                2.subtraction
                3.multiplication
                4.division
                5.exit""")
    # input from the user 
    select = input("Select operations form 1, 2, 3, 4 ,5:")
    if select == '5':
        break
              

    number_1 = float(input("Enter first number: ")) 
    number_2 = float(input("Enter second number: ")) 

    if select == '1': 
            print(number_1, "+", number_2, "=", 
                                            add(number_1, number_2)) 

    elif select == '2': 
            print(number_1, "-", number_2, "=", 
                                            subtract(number_1, number_2)) 

    elif select == '3': 
            print(number_1, "*", number_2, "=", 
                                            multiply(number_1, number_2)) 

    elif select == '4':
        try:
            print(number_1, "/", number_2, "=", 
                                            divide(number_1, number_2))
        except ZeroDivisionError:
            print('You can\'t divide by zero',ZeroDivisionError)
      
    else: 
            print("Invalid input") 
