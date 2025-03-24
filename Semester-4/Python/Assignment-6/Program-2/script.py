import pandas as pd

data = {
    'Category': ['Electronics', 'Electronics', 'Clothing', 'Clothing', 'Groceries'],
    'Item': ['TV', 'Laptop', 'Shirt', 'Pants', 'Fruits'],
    'Expenditure': [1200, 1500, 300, 400, 200]
}

df = pd.DataFrame(data)

total_expenditure = df.groupby('Category')['Expenditure'].sum()

print("Total Expenditure per Category:")
print(total_expenditure)