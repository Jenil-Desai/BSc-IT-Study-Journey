def occurance_counter (arr):
    res = {}
    for item in arr:
        if item in res:
            res[item] += 1
        else:
            res[item] = 1
    return res

fruits = ["apple", "banana", "orange", "apple", "grape", "banana", "grape", "apple"]

print(occurance_counter(fruits))