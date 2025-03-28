import mysql.connector

connection = mysql.connector.connect(host="localhost",user="root",password="root",database="Semester4")

cursor = connection.cursor()

qry = "CREATE TABLE Student2(id INT(5), name VARCHAR(255))"

cursor.execute(qry)
print("Table Created Successfully")