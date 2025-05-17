from user import Banker, Customer
from database import DatabaseConnection  # Import DatabaseConnection

def main_menu():
    print("\n1. Banker Menu")
    print("2. Customer Menu")
    print("3. Exit")
    return input("Please select an option: ")

def banker_menu(banker, cursor):
    while True:
        print("\n-- Banker Menu --")
        print("1. Register")
        print("2. Login")
        print("3. View All Customers")
        print("4. Update Customer Balance")
        print("5. Delete Customer")
        print("6. Back to Main Menu")
        
        choice = input("Select an option: ")
        
        if choice == '1':
            username = input("Enter username: ")
            password = input("Enter password: ")
            banker = Banker(username, password)
            banker.register(cursor)
        elif choice == '2':
            username = input("Enter username: ")
            password = input("Enter password: ")
            banker = Banker(username, password)
            if banker.login(cursor):
                print("Banker logged in successfully.")
            else:
                print("Invalid credentials.")
        elif choice == '3':
            customers = banker.view_customers(cursor)
            for customer in customers:
                print(f"Customer ID: {customer[0]}, Username: {customer[1]}, Balance: {customer[3]}")
        elif choice == '4':
            customer_id = int(input("Enter customer ID to update: "))
            new_balance = float(input("Enter new balance: "))
            banker.update_customer_balance(cursor, customer_id, new_balance)
        elif choice == '5':
            customer_id = int(input("Enter customer ID to delete: "))
            confirmation = input(f"Are you sure you want to delete customer {customer_id}? (Y/N): ")
            if confirmation.lower() == 'y':
                banker.delete_customer(cursor, customer_id)
        elif choice == '6':
            break
        else:
            print("Invalid choice, please try again.")

def customer_menu(customer, cursor):
    while True:
        print("\n-- Customer Menu --")
        print("1. Login")
        print("2. Withdraw")
        print("3. Deposit")
        print("4. View Balance")
        print("5. Back to Main Menu")

        choice = input("Select an option: ")

        if choice == '1':
            username = input("Enter username: ")
            password = input("Enter password: ")
            customer = Customer(username, password)
            if customer.login(cursor):
                print("Customer logged in successfully.")
            else:
                print("Invalid credentials.")
        elif choice == '2':
            amount = float(input("Enter withdrawal amount: "))
            customer.withdraw(cursor, amount)
        elif choice == '3':
            amount = float(input("Enter deposit amount: "))
            customer.deposit(cursor, amount)
        elif choice == '4':
            print(f"Current balance: {customer.get_balance()}")
        elif choice == '5':
            break
        else:
            print("Invalid choice, please try again.")

def run():
    db = DatabaseConnection()  # Create an instance of DatabaseConnection
    conn = db.connect()  # Establish the connection
    cursor = conn.cursor()  # Create a cursor to interact with the database

    while True:
        choice = main_menu()
        if choice == '1':
            banker = None
            banker_menu(banker, cursor)
        elif choice == '2':
            customer = None
            customer_menu(customer, cursor)
        elif choice == '3':
            break
        else:
            print("Invalid option, try again.")

    db.close()  # Close the database connection

if __name__ == "__main__":
    run()
