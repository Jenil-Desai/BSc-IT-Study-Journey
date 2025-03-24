import pandas as pd
import matplotlib.pyplot as plt

data = {
    'Category': ['Electronics', 'Electronics', 'Clothing', 'Clothing', 'Groceries', 'Electronics'],
    'Item': ['TV', 'Laptop', 'Shirt', 'Pants', 'Fruits', 'TV'],
    'Expenditure': [1200, 1500, 300, 400, 200, 1200]
}

df = pd.DataFrame(data)

total_expenditure = df.groupby('Category')['Expenditure'].sum()
total_expenditure.plot(kind='pie', autopct='%1.1f%%', startangle=90)
plt.title('Total Expenditure per Category')
plt.ylabel('')
plt.show()