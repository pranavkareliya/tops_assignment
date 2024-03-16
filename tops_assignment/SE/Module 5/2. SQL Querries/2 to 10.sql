-- Create Table  given below : Employee and Incentive Table


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

-- SELECT * FROM Employee WHERE first_name = 'Tom';
SELECT first_name ='Tom' as Employee_Name from Employee;

-- 4. Get first_name,joining_date and salary from employee table
SELECT first_name ='Tom' as Employee_Name from Employee;

-- 5. Get all employee details from the employee table order by first_name ascending
    -- and salary descending