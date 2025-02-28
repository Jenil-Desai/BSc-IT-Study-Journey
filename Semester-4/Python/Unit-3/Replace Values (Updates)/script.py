import pandas as pd

df = pd.DataFrame({
    'Name': ['John', 'Alice', 'Bob', 'Sarah'],
    'Age': [25, 30, 22, 28]
})
print(df)

df.loc[0, "Age"] = 23
print(df)