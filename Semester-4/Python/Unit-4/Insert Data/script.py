import mysql.connector

connection = mysql.connector.connect(host="localhost", user="root", password="root", database="Semester4")

cursor = connection.cursor()

qry = "INSERT INTO Student2(id,name) VALUES(%s,%s)"
val = (1,"John Doe")

cursor.execute(qry,val)
connection.commit()
print("record inserted.")