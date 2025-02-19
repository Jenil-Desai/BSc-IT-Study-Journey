import pandas as pd

class Employees:
    
    def __init__(self,filename:str):
        self.fileName = filename
    
    def add(self):
        df = pd.DataFrame({
            "Id": ['1', '2', '2', '3', None, '5', '6', '6', '8', '9'],
            "Name": ["John Doe", "Jane Smith", "Jane Lord", None, "Bob Wilson", "Alice Brown", "Charlie Davis", "Charlie Davis", None, "Eve Johnson"],
            "salary": [20000, 25000, 25000, 30000, None, 28000, 32000, 32000, 27000, None]
        })
        df.to_csv(self.fileName,index=False)
        print("Data added successfully")
    
    def read(self):
        df = pd.read_csv(self.fileName)
        print(df)
        
    def clean(self):
        df = pd.read_csv(self.fileName)
        df.dropna(inplace=True)
        df.to_csv(self.fileName,index=False)
        print("Data cleaned successfully")
    
    def remove_duplicates(self):
        df = pd.read_csv(self.fileName)
        df.drop_duplicates(inplace=True)
        df.to_csv(self.fileName,index=False)
        print("Duplicates removed successfully")
        
emp = Employees("employees.csv")
emp.add()
emp.read()

emp.clean()
print("After cleaning")
emp.read()

emp.remove_duplicates()
print("After removing duplicates")
emp.read()