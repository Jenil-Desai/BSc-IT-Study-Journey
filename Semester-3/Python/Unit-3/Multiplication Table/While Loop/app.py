num = int(input("Enter Number For Table : "))

def multi_table(num):
    i = 1
    while i <= 10:
        print(f"{num} x {i} = {i*num}")
        i += 1

multi_table(num)