import pandas as pd

data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Emma'],
    'Age': [25, 30, 35, 28, 40],
    'Salary': [50000, 60000, 70000, 55000, 80000],
    'Department': ['HR', 'IT', 'Finance', 'Marketing', 'IT']
}
df = pd.DataFrame(data)
print("====================================")
print(df)
print("====================================")

removed_age_df = df.drop('Age',axis="columns")
print("====================================")
print(removed_age_df)
print("====================================")

df["Experience"]  = [2, 5, 7, 3, 10]
print("====================================")
print(df)
print("====================================")

removed_salary_dept_df  = df.drop(["Salary","Department"],axis="columns")
print("====================================")
print(removed_salary_dept_df)
print("====================================")

print("====================================")
print(df.loc[:,["Name","Salary"]])
print("====================================")

print("====================================")
print(df[df["Department"] == "IT"])
print("====================================")

print("====================================")
df.rename(columns={"Salary":"Income"},inplace=True)
print(df)
print("====================================")

print("====================================")
df.columns = df.columns.str.upper()
print(df)
print("====================================")

print("====================================")
print(df[df["AGE"] > 30])
print("====================================")

print("====================================")
print(df[df["NAME"].str[0] == "A"])
print("====================================")

print("====================================")
print(df[df["INCOME"].between(50000,70000)])
print("====================================")

print("====================================")
print(df[(df["DEPARTMENT"] == "IT") | (df["DEPARTMENT"] == "HR")])
print("====================================")

print("====================================")
print(df[(df["INCOME"] > 60000) & (df["DEPARTMENT"] == "Finance")])
print("====================================")