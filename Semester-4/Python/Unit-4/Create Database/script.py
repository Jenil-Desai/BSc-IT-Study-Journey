import mysql.connector

mydb = mysql.connector.connect(host="localhost",user="root",passwd="root",database="Semester4")

mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE IF NOT EXISTS Semester4")
print("Database created successfully")