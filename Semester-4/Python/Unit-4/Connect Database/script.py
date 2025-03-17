from mysql.connector import Error

import mysql.connector

def create_connection(host_name, user_name, user_password, db_name):
    connection = None
    try:
        connection = mysql.connector.connect(
            host=host_name,
            user=user_name,
            passwd=user_password,
            database=db_name
        )
        if connection.is_connected():
            print("Connection to MySQL DB successful")
    except Error as e:
        print(f"The error '{e}' occurred")
    return connection

host_name = "localhost"
user_name = "jenil-desai"
user_password = ""
db_name = "mysql"

connection = create_connection(host_name, user_name, user_password, db_name)