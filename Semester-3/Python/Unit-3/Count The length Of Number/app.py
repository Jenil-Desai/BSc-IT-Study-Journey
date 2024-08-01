num = int(input("Enter Number For Length : "))

def num_len(num):
    count = 0
    while num != 0:
        num = num // 10
        count += 1
    return count

print(num_len(num))