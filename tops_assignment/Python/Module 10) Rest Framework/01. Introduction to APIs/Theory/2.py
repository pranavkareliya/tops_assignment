# Types of APIs: REST, SOAP.

print("1. REST (Representational State Transfer)")
print("""

    - Uses HTTP methods like GET, POST, PUT, DELETE.

    - Stateless: Each request from a client to server must contain all 
   the  information needed to understand and process the request.

    - Uses URLs to access resources (like /users/1 to get user with ID 1).

    - Data Format: Primarily JSON (can also use XML, HTML, etc.).

""")

print("2. SOAP (Simple Object Access Protocol)")
print("""

    - Protocol-based: Strict standards.

    - Communicates via XML only.

    - Works over HTTP, SMTP, TCP, etc.

    - Has built-in security (WS-Security) and supports transactions.

""")