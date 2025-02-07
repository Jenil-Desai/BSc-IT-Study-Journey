import pandas as pd

df = pd.DataFrame({
    "name": ["Bob","John","Alice"],
    "age": [20,19,26]
})
df.to_csv("file.csv",index=False)