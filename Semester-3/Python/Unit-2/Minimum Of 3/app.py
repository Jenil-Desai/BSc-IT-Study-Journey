def find_min(a,b,c,):
    min_value = a
    if b < min_value:
        min_value = b
    if c < min_value:
        min_value = c
    return min_value

min_num = find_min(10,2,50)
print(f"The minimum number is: {min_num}")