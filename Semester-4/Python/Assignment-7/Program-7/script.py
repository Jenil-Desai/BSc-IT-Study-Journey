import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="root",
    database="python"
)

mycursor = mydb.cursor()
sql = "UPDATE python SET name = 'Alice' WHERE age = 25"

mycursor.execute(sql)
mydb.commit()
print(mycursor.rowcount, "record(s) affected")