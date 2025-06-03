from base import BaseAccount
from db_connection import get_db_connection

class Customer(BaseAccount):
    def __init__(self, id, name, balance=0):
        super().__init__(id, name, balance)

    def deposit(self, amount):
        if amount > 0:
            self._balance += amount
            self.update_balance_in_db()
            print(f"Deposited {amount}. New balance: {self._balance}")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        if 0 < amount <= self._balance:
            self._balance -= amount
            self.update_balance_in_db()
            print(f"Withdrew {amount}. New balance: {self._balance}")
        else:
            print("Invalid withdrawal amount.")

    def update_balance_in_db(self):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("UPDATE customers SET balance = %s WHERE id = %s", (self._balance, self.id))
        conn.commit()
        conn.close()

    @classmethod
    def register(cls, name, initial_balance=0):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("INSERT INTO customers (name, balance) VALUES (%s, %s)", (name, initial_balance))
        conn.commit()
        cursor.execute("SELECT LAST_INSERT_ID()")
        customer_id = cursor.fetchone()[0]
        conn.close()
        return cls(customer_id, name, initial_balance)

    @classmethod
    def login(cls, customer_id):
        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM customers WHERE id = %s", (customer_id,))
        result = cursor.fetchone()
        conn.close()
        if result:
            return cls(result[0], result[1], result[2])
        else:
            print("Customer not found.")
            return None
