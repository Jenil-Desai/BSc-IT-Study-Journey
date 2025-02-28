import pandas as pd

df = pd.DataFrame({
    'Name': ['  John', '   Mike', '    David'],
    'Age': ['25  ', '30   ', '35    '],
    'City': ['  New York  ', '   London   ', '    Paris    ']
})
print(df)

df['Name'] = df["Name"].str.lstrip()
print(df)

df['Age'] = df["Age"].str.rstrip()
print(df)

df['City'] = df["City"].str.strip()
print(df)