num = int(input("Enter An Number For The Sum : "))

def calculate_sum(num):
    total = 0
    i = 1
    while i <= num:
        total += i
        i += 1
    return total

print(calculate_sum(num))