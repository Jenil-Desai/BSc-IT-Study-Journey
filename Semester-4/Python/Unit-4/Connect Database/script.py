import mysql.connector

connection = mysql.connector.connect(host="localhost", user="root", password="root",)

if connection.is_connected():
    print("Connected to MySQL server")
else:
    print("Connection failed")