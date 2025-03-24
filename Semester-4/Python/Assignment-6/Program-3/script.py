import pandas as pd

data = {
    'Category': ['Electronics', 'Electronics', 'Clothing', 'Clothing', 'Groceries'],
    'Item': ['TV', 'Laptop', 'Shirt', 'Pants', 'Fruits'],
    'Expenditure': [1200, 1500, 300, 400, 200]
}

df = pd.DataFrame(data)

print("Row Labels:")
print(df.index)
print("\nColumn Labels:")
print(df.columns)
print("\nData Types:")
print(df.dtypes)
print("\nDimensions:")
print(df.shape)