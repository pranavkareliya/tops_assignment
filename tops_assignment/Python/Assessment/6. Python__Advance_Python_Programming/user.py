class User:
    def __init__(self, username, password):
        self.username = username
        self.password = password

    def login(self, cursor):
        query = "SELECT * FROM {} WHERE username=%s AND password=%s".format(self.__class__.__name__.lower())
        cursor.execute(query, (self.username, self.password))
        return cursor.fetchone()

class Banker(User):
    def __init__(self, username, password):
        super().__init__(username, password)

    def register(self, cursor):
        cursor.execute("INSERT INTO banker (username, password) VALUES (%s, %s)", (self.username, self.password))
        print("Banker registered successfully.")

    def view_customers(self, cursor):
        cursor.execute("SELECT * FROM customer")
        return cursor.fetchall()

    def update_customer_balance(self, cursor, customer_id, new_balance):
        cursor.execute("UPDATE customer SET balance=%s WHERE id=%s", (new_balance, customer_id))
        print("Customer balance updated.")

    def delete_customer(self, cursor, customer_id):
        cursor.execute("DELETE FROM customer WHERE id=%s", (customer_id,))
        print("Customer deleted successfully.")

class Customer(User):
    def __init__(self, username, password, balance=0.0):
        super().__init__(username, password)
        self.__balance = balance

    def get_balance(self):
        return self.__balance

    def withdraw(self, cursor, amount):
        if self.__balance >= amount:
            self.__balance -= amount
            cursor.execute("UPDATE customer SET balance=%s WHERE username=%s", (self.__balance, self.username))
            print(f"Withdrawal of {amount} successful.")
        else:
            print("Insufficient funds.")

    def deposit(self, cursor, amount):
        self.__balance += amount
        cursor.execute("UPDATE customer SET balance=%s WHERE username=%s", (self.__balance, self.username))
        print(f"Deposit of {amount} successful.")
