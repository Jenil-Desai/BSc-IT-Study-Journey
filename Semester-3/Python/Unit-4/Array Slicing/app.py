import numpy as np

arr = np.array([1,2,3,4,5])

print(arr[1:3])
print(arr[2:])
print(arr[:-2])

print("-----")

arr_2 = np.array([[1,2,3,2,1],[4,5,6,5,4]])

print(arr_2[1,1:])
print(arr_2[0,:-1])
print(arr_2[1:])