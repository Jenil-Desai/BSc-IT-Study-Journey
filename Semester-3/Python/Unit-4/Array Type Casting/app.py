import numpy as np

arr = np.array([1.1,2.2,3.3,0])
arr_32 = arr.astype(int)
arr_bool = arr.astype(bool)

print(arr.dtype, arr)
print(arr_32.dtype, arr_32)
print(arr_bool.dtype, arr_bool)