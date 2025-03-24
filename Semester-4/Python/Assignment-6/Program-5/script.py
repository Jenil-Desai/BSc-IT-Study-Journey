import pandas as pd

class DataHandler:
    def __init__(self, file_path):
        self.file_path = file_path
        self.dataframe = None

    def read_csv(self):
        self.dataframe = pd.read_csv(self.file_path)

    def write_csv(self, output_path):
        if self.dataframe is not None:
            self.dataframe.to_csv(output_path, index=False)

    def filter_data(self, column_name, value):
        if self.dataframe is not None:
            return self.dataframe[self.dataframe[column_name] == value]

data_handler = DataHandler('data.csv')
data_handler.read_csv()
filtered_data = data_handler.filter_data('Category', 'Electronics')
data_handler.write_csv('filtered_data.csv')