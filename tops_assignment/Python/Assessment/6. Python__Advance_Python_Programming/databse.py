# database.py

import mysql.connector
from mysql.connector import Error
from database import DatabaseConnection

class DatabaseConnection:
    def __init__(self):
        self.conn = None

    def connect(self):
        try:
            self.conn = mysql.connector.connect(
                host="localhost",         # Default host for XAMPP MySQL server
                user="root",              # Default username in XAMPP
                password="",              # Default password (blank by default)
                database="bank_system",   # Database we created in phpMyAdmin
                port=3306                 # Default MySQL port
            )
            if self.conn.is_connected():
                print("Connection successful.")
                return self.conn
        except Error as e:
            print(f"Error connecting to database: {e}")
            return None

    def close(self):
        if self.conn and self.conn.is_connected():
            self.conn.close()
            print("Connection closed.")
