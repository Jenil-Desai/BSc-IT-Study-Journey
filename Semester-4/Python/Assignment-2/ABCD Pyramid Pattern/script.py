import string

def print_pattern(n):
    alphabet = string.ascii_uppercase
    index = 0
    for i in range(1, n + 1):
        for j in range(i):
            print(alphabet[index], end=" ")
            index += 1
        print()

number = int(input("Enter An Number : "))
print_pattern(4)