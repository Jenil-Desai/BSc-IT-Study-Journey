import numpy as np

list1 = ["J","E","N","I","L"]
print("".join(list1))

list2 = "Jenil"
print("-".join(list2))

tuple1 = ("1","2","3","4","5")
s = "-"
s = s.join(tuple1)
print(s)

arr = np.array([1,2,3,4,5,6,7,8])
s = arr.reshape(2,4)
print(s)

print(arr.shape)

split = np.array_split(arr,3)
print(split)

print(np.where(arr == 4))

rev_sort = np.sort(arr)
print(rev_sort[::-1])

x = [True,False,True,False,True,False,True,False]
newarr = arr[x]
print(newarr)