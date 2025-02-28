import pandas as pd

df = pd.read_csv("/Volumes/Data/Github/BSc-IT-Study-Journey/Semester-4/Python/Unit-3/car_price_dataset.csv")
df.fillna(0, inplace=True)
df.to_csv("Hello_world.csv",index=False)