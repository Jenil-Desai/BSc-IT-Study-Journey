import mysql.connector

connection = mysql.connector.connect(
        host="localhost",
        user="root",
        password="root",
        database="python"
    )

mycursor = connection.cursor()

mycursor.execute("CREATE TABLE python (name VARCHAR(255), age INT)")
mycursor.execute("SHOW TABLES")

for table in mycursor:
    print(table)