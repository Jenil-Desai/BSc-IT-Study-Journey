import mysql.connector

connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="root",
    database="python"
)

mycursor = connection.cursor()

sql = "INSERT INTO python (name, age) VALUES (%s, %s)"
val = ("John", 25)

mycursor.execute(sql, val)
connection.commit()
print(mycursor.rowcount, "record inserted.")