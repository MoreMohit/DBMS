CREATE TABLE Employees 
(
EmployeeID INT PRIMARY KEY,
FirstName VARCHAR(50),
LastName VARCHAR(50),
Department VARCHAR(50)

CREATE TABLE Salaries 
(
EmployeeID INT PRIMARY KEY,
Salary DECIMAL(10, 2)
);

desc Employees;

desc Salaries;

INSERT INTO Employees (EmployeeID, FirstName, LastName, Department)
VALUES (1, 'MOHIT', 'MORE','HR'),
(2, 'ROHIT', 'BAGAL', 'Finance'),
(3, 'OM', 'PAWAR', 'Marketing');

select * from Employees;

INSERT INTO Salaries (EmployeeID, Salary)
VALUES (1, 50000.00),
(2, 60000.00),
(3, 55000.00);


select * from Salaries;


CREATE VIEW EmployeeSalaryView AS
SELECT e.EmployeeID, e.FirstName, e.LastName, e.Department, s.Salary
FROM Employees e
JOIN Salaries s ON e.EmployeeID = s.EmployeeID;

CREATE VIEW FinanceEmployees AS
SELECT EmployeeID, FirstName, LastName
FROM Employees
WHERE Department = 'Finance';

UPDATE EmployeeSalaryView
SET Salary = 65000.00
WHERE EmployeeID = 1;

SELECT * FROM Salaries;

