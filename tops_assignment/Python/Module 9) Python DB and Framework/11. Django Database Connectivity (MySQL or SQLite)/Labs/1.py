# Set up database connectivity for a Django project.

print("""

1.Connecting to SQLite (Default Database)
   - Django uses SQLite by default, requiring no additional setup.
   
   DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.sqlite3',
        'NAME': BASE_DIR / "db.sqlite3",
    }
}


""")