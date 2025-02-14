def divide_numbers(num1, num2):
    try:
        result = num1 / num2
    except ZeroDivisionError:
        return "Error: Division by zero is not allowed."
    else:
        return f"The result of {num1} divided by {num2} is {result}."

print(divide_numbers(10, 2))  
print(divide_numbers(10, 0))  