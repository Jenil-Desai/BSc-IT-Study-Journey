import pandas as pd

df = pd.DataFrame({
    'Name': ['John', 'Alice', 'John', 'Bob', 'Alice'],
    'Age': [25, 30, 25, 35, 30],
    'City': ['NY', 'LA', 'NY', 'SF', 'LA']
})

print(df.duplicated())
df.drop_duplicates(inplace=True)
print(df)