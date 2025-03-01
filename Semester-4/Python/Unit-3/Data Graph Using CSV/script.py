import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("Hello_world.csv")

plt.plot(df.Mileage.loc[0:100], df.Price.loc[0:100])
plt.show()