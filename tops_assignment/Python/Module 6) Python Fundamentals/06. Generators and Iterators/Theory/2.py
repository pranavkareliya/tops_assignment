# Difference between yield and return.

# Yield

print("1. Yield is generally used to convert a regular Python function into a generator.")
print("2. It replace the return of a function to suspend its execution without destroying local variables.")
print("3. It is used when the generator returns an intermediate result to the caller.")
print("4. Code written after yield statement execute in next function call.")
print("5. It can run multiple times.")
print("6. Yield statement function is executed from the last state from where the function get paused.")

# Return
print("1. Return is generally used for the end of the execution and “returns” the result to the caller statement.")
print("2. It exits from a function and handing back a value to its caller.")
print("3. It is used when a function is ready to send a value.")
print("4. while, code written after return statement wont execute.")
print("5. It only runs single time.")
print("6. Every function calls run the function from the start.")