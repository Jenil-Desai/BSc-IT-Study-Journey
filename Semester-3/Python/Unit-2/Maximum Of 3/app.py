def find_max(a, b, c):
    max_value = a
    if b > max_value:
        max_value = b
    if c > max_value:
        max_value = c
    return max_value

max_num = find_max(10,2,50)
print(f"The maximum number is: {max_num}")