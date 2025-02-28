import pandas as pd

df = pd.DataFrame({
    "ino" : [1, 2, 3, 4, 5],
    "name" : ["A", "B", "C", "D", "E"],
})

df["rate"] = [10, 20, 30, 40, 50]
df["qty"] = [1, 2, 3, 4, 5]
df["amount"] = df["rate"] * df["qty"]

print(df[df["amount"] > 100])