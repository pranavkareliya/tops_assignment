# Write a Django project to connect to an SQLite/MySQL database and manage doctor records.

print("""

2.Connecting to MySQL
   - To use MySQL, follow these steps:
   - pip install mysqlclient

   DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.mysql',
        'NAME': 'database_name',
        'USER': 'your_username',
        'PASSWORD': 'your_password',
        'HOST': 'localhost',  # Or the database server IP
        'PORT': '3306',
    }
}

""")