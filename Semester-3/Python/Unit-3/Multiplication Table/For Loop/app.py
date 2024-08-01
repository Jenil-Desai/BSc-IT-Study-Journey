num = int(input("Enter an Number For Table : "))

def multi_table(num):
    i = 1

    for n in range(1,11):
        print(f"{num} x {n} = {num*i}")

multi_table(num)