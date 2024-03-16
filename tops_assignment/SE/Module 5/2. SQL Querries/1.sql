-- Create Table Name : Student and Exam


-- create student Table
CREATE TABLE student (
    Rollno INT auto_increment,
    Name varchar(50),
    Branch varchar(50),
    PRIMARY KEY(Rollno)
);

-- insert some values
INSERT INTO student (Name,Branch) VALUES 
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