import pandas as pd

df = pd.DataFrame(["John Doe","Alice","Tiger"])
print(df)

df2 = pd.DataFrame({
    "Name": ["John Doe","Alice","Tiger"],
    "Age": [23, 25, 22]
})
print(df2)