import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="root",
    database="python"
)
mycursor = mydb.cursor()
sql = "SELECT * FROM python WHERE age = 25"
mycursor.execute(sql)
myresult = mycursor.fetchall()
for x in myresult:
    print(x)