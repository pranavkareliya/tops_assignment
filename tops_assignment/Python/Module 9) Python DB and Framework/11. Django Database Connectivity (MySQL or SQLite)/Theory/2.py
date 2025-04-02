# Using the Django ORM for database queries.

print('''
    SELECT username, first_name, last_name, email FROM auth_user WHERE first_name LIKE 'R%' AND last_name LIKE 'D%';
queryset_1 = User. filter( first_name__startswith='R', last_name__startswith='D' )
queryset_2 = User. filter( first_name__startswith='R' ) & User. ...
queryset_3 = User.
''')