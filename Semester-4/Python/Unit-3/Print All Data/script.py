import pandas as pd

df = pd.read_csv("/Volumes/Data/Github/BSc-IT-Study-Journey/Semester-4/Python/Unit-3/car_price_dataset.csv").loc[0:10000]
print(df)