list = [1,2,3,4,5,6,7,8,9,10]

def rev_list(list):
    list_length = len(list)
    while list_length > 0:
        print(f"{list[list_length-1]}")
        list_length -= 1

rev_list(list)