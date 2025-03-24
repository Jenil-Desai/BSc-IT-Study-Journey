import mysql.connector

connection = mysql.connector.connect(host="localhost", user="root", password="root")

mycursor = connection.cursor()
mycursor.execute("CREATE DATABASE python")
mycursor.execute("SHOW DATABASES")

for db in mycursor:
    print(db)