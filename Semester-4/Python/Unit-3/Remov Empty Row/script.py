import pandas as pd

df = pd.DataFrame({
    'A': [1, None, 3, None, 5],
    'B': [None, 2, None, 4, 5],
    'C': [1, 2, None, None, 5]
})
print(df)

df.dropna(inplace=True)
print(df)