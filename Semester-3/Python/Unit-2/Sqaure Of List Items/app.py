nums = [10,23,56,77,34,56,78,2]

def sqaured_list(list):
    new_list = [];
    for n in list:
        new_list.append(n*n)
    return new_list

print(sqaured_list(nums))