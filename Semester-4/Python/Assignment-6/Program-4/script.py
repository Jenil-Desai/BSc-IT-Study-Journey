import pandas as pd

data = {
    'Category': ['Electronics', 'Electronics', 'Clothing', 'Clothing', 'Groceries', 'Electronics'],
    'Item': ['TV', 'Laptop', 'Shirt', 'Pants', 'Fruits', 'TV'],
    'Expenditure': [1200, 1500, 300, 400, 200, 1200]
}

df = pd.DataFrame(data)

df_unique = df.drop_duplicates()

print("DataFrame after removing duplicates:")
print(df_unique)