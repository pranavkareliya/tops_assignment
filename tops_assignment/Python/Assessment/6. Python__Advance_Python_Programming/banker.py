import mysql.connector
from db_connection import get_db_connection

class Banker:
    def __init__(self, username, password):
        self.username = username
        self.password = password

    def login(self):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM bankers WHERE username = %s AND password = %s", (self.username, self.password))
        result = cursor.fetchone()
        conn.close()
        return result is not None

    def register(self):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("INSERT INTO bankers (username, password) VALUES (%s, %s)", (self.username, self.password))
        conn.commit()
        conn.close()
        print("Banker registered successfully.")

    def view_customers(self):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM customers")
        customers = cursor.fetchall()
        conn.close()
        return customers

    def update_customer(self, customer_id, new_balance):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("UPDATE customers SET balance = %s WHERE id = %s", (new_balance, customer_id))
        conn.commit()
        conn.close()
        print(f"Customer {customer_id} balance updated to {new_balance}.")

    def delete_customer(self, customer_id):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("DELETE FROM customers WHERE id = %s", (customer_id,))
        conn.commit()
        conn.close()
        print(f"Customer {customer_id} deleted.")
