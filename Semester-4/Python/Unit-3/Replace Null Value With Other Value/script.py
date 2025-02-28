import pandas as pd

df = pd.DataFrame({
    'Name': ['John', 'Jane', 'Bob', 'Alice', None],
    'Course': ['BCA', 'BBA', None, 'BSc', 'BCom'],
    'Grade': [85, 90, 78, None, 88]
})

print(df)
df["Name"].fillna("Anoynous", inplace=True)
df["Course"].fillna("Not Available", inplace=True)
df["Grade"].fillna(0, inplace=True)
print(df)