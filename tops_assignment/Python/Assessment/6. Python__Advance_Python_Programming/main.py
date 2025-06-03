from banker import Banker
from customer import Customer

def main():
    while True:
        print("\n===== BANKING SYSTEM MAIN MENU =====")
        print("1. Banker Register")
        print("2. Banker Login")
        print("3. Customer Register")
        print("4. Customer Login")
        print("5. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            username = input("Enter new banker username: ")
            password = input("Enter new banker password: ")
            banker = Banker(username, password)
            banker.register()

        elif choice == '2':
            username = input("Enter banker username: ")
            password = input("Enter banker password: ")
            banker = Banker(username, password)
            if banker.login():
                print("Login successful.")
                while True:
                    print("\n--- Banker Dashboard ---")
                    print("1. View all Customers")
                    print("2. Update Customer Balance")
                    print("3. Delete Customer")
                    print("4. Logout")

                    b_choice = input("Enter choice: ")
                    if b_choice == '1':
                        customers = banker.view_customers()
                        for c in customers:
                            print(f"ID: {c[0]}, Name: {c[1]}, Balance: ₹{c[2]}")
                    elif b_choice == '2':
                        cid = int(input("Enter Customer ID to update: "))
                        new_bal = float(input("Enter new balance: "))
                        banker.update_customer(cid, new_bal)
                    elif b_choice == '3':
                        cid = int(input("Enter Customer ID to delete: "))
                        confirm = input("Are you sure (Y/N)? ").strip().upper()
                        if confirm == 'Y':
                            banker.delete_customer(cid)
                        else:
                            print("Deletion cancelled.")
                    elif b_choice == '4':
                        break
                    else:
                        print("Invalid option. Try again.")
            else:
                print("Invalid credentials!")

        elif choice == '3':
            name = input("Enter your name: ")
            init_balance = float(input("Enter initial deposit: "))
            customer = Customer.register(name, init_balance)
            print(f"Customer registered successfully. Your ID is {customer.id}")

        elif choice == '4':
            cid = int(input("Enter your Customer ID: "))
            customer = Customer.login(cid)
            if customer:
                while True:
                    print(f"\n--- Welcome {customer.name} ---")
                    print("1. View Balance")
                    print("2. Deposit")
                    print("3. Withdraw")
                    print("4. Logout")

                    c_choice = input("Enter choice: ")
                    if c_choice == '1':
                        print(f"Current Balance: ₹{customer.get_balance()}")
                    elif c_choice == '2':
                        amt = float(input("Enter amount to deposit: "))
                        customer.deposit(amt)
                    elif c_choice == '3':
                        amt = float(input("Enter amount to withdraw: "))
                        customer.withdraw(amt)
                    elif c_choice == '4':
                        break
                    else:
                        print("Invalid option. Try again.")
            else:
                print("Login failed.")

        elif choice == '5':
            print("Thank you for using the Banking System.")
            break
        else:
            print("Invalid choice! Please select from the menu.")

if __name__ == "__main__":
    main()