class BaseAccount:
    def __init__(self, id, name, balance=0):
        self.id = id
        self.name = name
        self._balance = balance

    def get_balance(self):
        return self._balance

    def set_balance(self, amount):
        if amount >= 0:
            self._balance = amount
        else:
            print("Balance cannot be negative.")
