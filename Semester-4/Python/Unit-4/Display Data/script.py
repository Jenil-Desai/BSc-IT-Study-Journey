import mysql.connector

connection = mysql.connector.connect(host="localhost", user="root", password="root", database="Semester4")

cursor = connection.cursor()

qry = "SELECT * FROM Student2"
cursor.execute(qry)

result = cursor.fetchall()

for row in result:
    print(row)