import pandas as pd

data = [1,2,3,4,5,6,7,8,9,10]
data1 = {
    "name": "Jenil Desai",
    "age": 18,
    "university": "Atmiya"
}

new_data = pd.Series(data)
new_data1 = pd.Series(data1)

print(new_data)
print(new_data1)