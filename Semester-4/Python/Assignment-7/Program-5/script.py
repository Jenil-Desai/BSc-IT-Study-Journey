import mysql.connector

connection = mysql.connector.connect(
  host="localhost",
  user="root",
  password="root",
  database="python"
)

mycursor = connection.cursor()
mycursor.execute("SELECT * FROM python")
myresult = mycursor.fetchall()
for x in myresult:
    print(x)