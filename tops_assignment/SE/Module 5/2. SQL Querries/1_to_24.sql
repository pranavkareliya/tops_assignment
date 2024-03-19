-- 1. Create Table Name : Student and Exam

-- create student Table
CREATE TABLE student (
    Rollno INT auto_increment,
    s_Name varchar(50),
    Branch varchar(50),
    PRIMARY KEY(Rollno)
);

-- insert some values
INSERT INTO student (s_Name,Branch) VALUES 
    ('Jay', 'Computer Science'),
    ('Suhani', 'Electronic and Com'),
    ('Kriti', 'Electronic and Com');

-- create Exam Table
CREATE TABLE exam(
    S_code varchar(50),
    Marks INT,
    P_code varchar(50),
    Rollno INTEGER,
    FOREIGN KEY (Rollno) REFERENCES student (Rollno)
);

-- insert some values
INSERT INTO exam (S_code, Marks, P_code) VALUES
    ('CS11',50,'CS'),
    ('CS12',60,'CS'),
    ('EC101',66,'EC'),
    ('EC102',70,'EC'),
    ('EC101',45,'EC'),
    ('EC102',50,'EC');

-- 2. Create Table  given below : Employee and Incentive Table

-- create table Employee
CREATE TABLE Employee(
    employee_id INT auto_increment,
    first_name varchar(50),
    last_name varchar(50),
    salary int,
    joining_date datetime,
    department varchar(50),
    PRIMARY KEY(employee_id)
);

-- insert some values
INSERT INTO Employee (first_name,last_name,salary,joining_date,department) VALUES
    ('John','Abraham',1000000,'01-01-2013 12:00:00 AM','Banking'),
    ('Michal','Clarke',800000,'01-01-2013 12:00:00 AM','Insurance'),
    ('Roy','Thomas',700000,'01-02-2013 12:00:00 AM','Banking'),
    ('Tom','Jose',600000,'01-02-2013 12:00:00 AM','Insurance'),
    ('Jerry','Pinto',650000,'01-02-2013 12:00:00 AM','Insurance'),
    ('Philip','Mathew',750000,'01-01-2013 12:00:00 AM','Services'),
    ('TestName1','123',650000,'01-01-2013 12:00:00 AM','Services'),
    ('TestName2','Lname%',600000,'01-02-2013 12:00:00 AM','Insurance');

-- create table Incentive
CREATE TABLE Incentive(
    employee_ref_id INT auto_increment,
    incentive_date datetime,
    employee_id INT,
    incentive_amount int,
    PRIMARY KEY(employee_ref_id),
    FOREIGN KEY (employee_id) REFERENCES Employee (employee_id)
);

INSERT INTO Incentive (incentive_date,incentive_amount) VALUES
    ('01-02-2013',5000),
    ('01-02-2013',3000),
    ('01-02-2013',4000),
    ('01-01-2013',4500),
    ('01-01-2013',3500);

-- 3. Get first_name from employee table using Tom name "Employee Name"
UPDATE employee SET first_name='Employee_Name' WHERE employee_id=4;

-- 4. Get first_name,joining_date and salary from employee table
SELECT first_name ='Tom' AS Employee_Name FROM Employee;

-- 5. Get all employee details from the employee table order by first_name ascending
    -- and salary descending
SELECT * FROM employee ORDER BY first_name;
SELECT * FROM employee ORDER BY salary DESC;

-- 6. Get employee details from employee table whose first name contains ‘J’. --
SELECT * FROM employee WHERE first_name LIKE 'j%';

-- 7. Get department wise maximum salary from employee table order by
-- 8. salary ascending?

SELECT department,salary FROM employee ORDER BY salary;

-- 9. Select first_name, incentive amount from employee and incentives table forthose employees who have 
-- incentives and incentive amount greater than 3000
SELECT first_name,incentive_amount FROM employee, Incentive WHERE incentive_amount > 3000;

-- 10. Create After Insert trigger on Employee table which insert records in viewtable

-- 11. create table given below : salesperson and customer 

-- CREATE TABLE SALESPERSON
CREATE TABLE salesperson(
    sno INT,
    sname varchar(50),
    city varchar(50),
    comm varchar(50),
    PRIMARY KEY(sno)
);

-- INSERT VALUES IN SALESPERSON TABLE
INSERT INTO salesperson (sno,sname,city,comm) VALUES
(1001, 'Peel', 'London', '.12'),
(1002, 'Serres', 'San Jose', '.13'),
(1004, 'Motika', 'London', '.11'),
(1007, 'Rafkin', 'Barcelona', '.15'),
(1003, 'Axelrod', 'New York', '.1');

-- CREATE TABLE CUSTOMER
CREATE TABLE customer(
	cnm int primary key,
    cname varchar(50),
    city varchar(50),
    rating int,
    sno int,
    FOREIGN KEY (sno) REFERENCES salseperson (sno)
);

-- INSERT VALUES IN CUSTOMER TABLE
INSERT INTO customer (cnm, cname, city, rating, sno) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelone', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

-- 12.Retrieve the below data from above table 

-- 13.All orders for more than $1000
SELECT * FROM orders WHERE order_value > 1000;

-- 14.Names and cities of all salespeople in London with commission above 0.12
SELECT sname,city FROM salesperson WHERE city='London' AND comm > .12;

-- 15.All salespeople either in Barcelona or in London
SELECT * FROM salesperson WHERE city='Barcelona' OR city='London';

-- 16.All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded)
SELECT * FROM salesperson WHERE comm BETWEEN 0.10 AND 0.12;

-- 17. All customers excluding those with rating <= 100 unless they are located in Rome
SELECT * FROM customer WHERE rating <= 100 and city = 'Roe';

-- 18. Write a SQL statement that displays all the information about all salespeople

-- CREATE TABLE SALESMAN
CREATE TABLE salesman(
    salesman_id INT,
    sname varchar(50),
    city varchar(50),
    commission varchar(50)
);

-- INSERT VALUES INTO SALESMAN TABLE
INSERT INTO salesman (salesman_id, sname, city, commission) VALUES
(5001,'James Hoog','New York',0.15),
(5002,'Nail Knite','Paris',0.13),
(5005,'Pit Alex','London',0.11),
(5006,'MC Lyon','Paris',0.14),
(5007,'Paul Adam','Rome',0.13),
(5003,'Lauson Hen','San Jose',0.12)

-- 19. From the following table, write a SQL query to find orders that are delivered by a salesperson with ID. 5001. 
-- Return ord_no, ord_date, purch_amt

-- CREATE TABLE ORDER
CREATE TABLE orders(
	ord_no int,
    purch_amt varchar(50),
    ord_date date,
    customer_id int,
    salesman_id int,
    PRIMARY KEY(ord_no),
    FOREIGN KEY(salesman_id) REFERENCES salesman(salesman_id)
);

-- INSERT VALUES IN ORDERS  TABLE
INSERT INTO orders(ord_no, purch_amt, ord_date, customer_id, salesman_id) VALUES
(70001,'150.5','2012-10-05',3005,5002),
(70009,'150.5','2012-09-10',3001,5005),
(70002,'150.5','2012-10-05',3002,5001),
(70004,'150.5','2012-08-17',3009,5003),
(70007,'150.5','2012-09-10',3005,5002),
(70005,'150.5','2012-07-27',3007,5001),
(70008,'150.5','2012-09-10',3002,5001),
(70010,'150.5','2012-10-10',3004,5006),
(70003,'150.5','2012-10-10',3009,5003),
(70012,'150.5','2012-06-27',3008,5002),
(70011,'150.5','2012-08-17',3003,5007),
(70013,'150.5','2012-04-25',3002,5001); 

SELECT ord_no, purch_amt, ord_date FROM orders WHERE salesman_id=5001;

-- 20. From the following table, write a SQL query to select a range of products whose price is in the range Rs.200 to Rs.600. 
-- Begin and end values are included. Return pro_id, pro_name, pro_price, and pro_com.

-- CREATE TABLE ITEM_MAST
CREATE TABLE item_mast(
    pro_id int,
    pro_name varchar(50),
    pro_price varchar(50),
    pro_com int,
    PRIMARY KEY(pro_id)
);

-- INSERT VALUES IN ITEM_MAST TABLE
INSERT INTO item_mast (pro_id, pro_name, pro_price, pro_com) VALUES
(101,'Mother Borad','3200.00',15),
(102,'Key Borad','450.00',16),
(103,'ZIP Drive','250.00',14),
(104,'Speaker','550.00',16),
(105,'Monitor','5000.00',11),
(106,'DVD Drive','900.00',12),
(107,'CD Drive','800.00',12),
(108,'Printer','2600.00',13),
(109,'Refill cartridge','350.00',13),
(110,'Mouse','250.00',12); 

SELECT * FROM item_mast WHERE pro_price BETWEEN 200 AND 600;

-- 21. From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg.
SELECT sum(pro_price) FROM item_mast WHERE pro_com = 16;
SELECT avg(pro_price) FROM item_mast WHERE pro_com = 16;

-- 22. From the following table, write a SQL query to display the pro_name as 'Item Name' and pro_priceas 'Price in Rs
SELECT pro_name AS 'item Name', pro_price AS 'Price in Rs.' FROM item_mast;

-- 23. From the following table, write a SQL query to find the items whose prices are higher than or equal to $250. 
-- Order the result by product price in descending, then product name in ascending. Return pro_name and pro_price.
SELECT pro_name FROM item_mast WHERE pro_price >= 250 ;
SELECT * FROM item_mast ORDER BY pro_price DESC;
SELECT pro_name FROM item_mast ORDER BY pro_name;

-- 24. From the following table, write a SQL query to calculate average price of the items for each company. Return average price
-- and companycode.
SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 11;

SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 12;

SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 13;

SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 14;

SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 15;

SELECT avg(pro_price),pro_com FROM item_mast WHERE pro_com = 16;