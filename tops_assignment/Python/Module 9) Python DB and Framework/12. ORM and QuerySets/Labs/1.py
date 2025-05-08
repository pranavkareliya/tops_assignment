# Perform CRUD operations using Django ORM.

print("""

Django's Object-Relational Mapping (ORM) allows interaction with 
   the database using Python instead of SQL.

1.Creating Records (Insert Data)
- Data is added using the model’s save() method or create().

2.Retrieving Records (Read Data)
- The all(), filter(), and get() methods are used to fetch data.

3.Updating Records (Modify Data)
- Objects are retrieved, modified, and saved using .save() or 
  updated using .update().

4.Deleting Records (Remove Data)
- The .delete() method removes records from the database.

5.Query Optimization
- Use select_related() for foreign keys and prefetch_related() for 
  many-to-many relationships.

""")