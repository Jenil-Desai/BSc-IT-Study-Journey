import numpy as np

arr1 = np.array([1, 2, 3, 4, 5])
arr2 = np.array([6, 7, 8, 9, 10])
arr3 = np.array([11, 12, 13, 14, 15])
arr4 = np.array([16, 17, 18, 19, 20])
arr5 = np.array([21, 22, 23, 24, 25])
arr6 = np.array([26, 27, 28, 29, 30])
arr7 = np.array([31, 32, 33, 34, 35])
arr8 = np.array([36, 37, 38, 39, 40])
arr9 = np.array([41, 42, 43, 44, 45])
arr10 = np.array([46, 47, 48, 49, 50])

arrays = [arr1, arr2, arr3, arr4, arr5, arr6, arr7, arr8, arr9, arr10]

for i in arrays:
    for j in i:
        print(j)