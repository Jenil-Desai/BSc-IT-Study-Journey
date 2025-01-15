def is_armstrong_number(num):
    digits = [int(d) for d in str(num)]
    power = len(digits)
    return num == sum(d ** power for d in digits)

number = int(input("Enter An Number : "))
print(f"{number} is an Armstrong number: {is_armstrong_number(number)}")