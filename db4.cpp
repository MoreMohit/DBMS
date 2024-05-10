create table EMP(
EMPNO int(10),
ENAME Varchar(20),
JOB Char(25),
MGR int(9),
HIREDATE Date,
SAL int(15),
COMM int(20),
DEPTNO int(12)
);


Insert into EMP
(EMPNO,ENAME,JOB,MGR,HIREDATE,SAL,COMM,DEPTNO)
values

(7369, 'ROHIT', 'Software-dev', 7902, '1980/12/17',800, null, 20),
(7499, 'OM', 'Salesman', 7698, '1981/02/20',1600, 300, 30),
(7521, 'ANIL', 'Salesman', 7698, '1981/02/22',1250 ,500, 30),
(7566, 'ROHAN', 'Manager', 7839, '1981/04/02' ,2975,null, 20),
(7654, 'RAJ', 'Salesman', 7698, '1981/09/28' ,1250, 1400, 30),
(7698, 'Bajrang', 'Manager', 7839, '1981/05/01',2850,null, 30),
(7782, 'Clark', 'Manager', 7839, '1981/06/09',2450,null, 10),
(7788, 'Elon_Musk', 'Analyst', 7566, '1982/12/09',3000,null, 20),
(7839, 'VIJAY', 'President',null, '1981/11/17' ,5000,null, 10),
(7844, 'Turner', 'Salesman', 7698, '1981/09/08',1500 ,0, 30),
(7876, 'ROHIT', 'Software-dev', 7788, '1983/01/12' ,1100,null, 20),
(7900, 'BAGAL', 'Software-dev',7698, '1981/12/03',950,null, 30),
(7902, 'Ford', 'Analyst', 7566, '1981/12/04' ,3000,null, 20),
(7934, 'ROHAN', 'Software-dev', 7782, '1982/01/23' ,1300,null, 10);


1 . List the name of analyst and salesmen.
select * from EMP where JOB='Analyst' or JOB='Salesman';

List the name of employee who have joined before 30 Sep 81.
mysql> select * from EMP where HIREDATE<'1981/10/30';
List names of employee who are not managers.
mysql> select ENAME from EMP where JOB!='Manager';
. List the names of employees whose employee number are 7369, 7521, 7839, 7934,
7788

mysql> select ENAME from EMP where EMPNO = 7369 or EMPNO = 7521 or EMPNO = 7839 or
EMPNO = 7934 or EMPNO = 7788;
List the employee not belonging to department 30,40 or 10.
mysql> select ENAME from EMP where DEPTNO != 30 and DEPTNO != 40 and DEPTNO != 10;
6. List the employee name for those who have joined between 30 June and 31 Dec 81.
mysql> select ENAME from EMP where HIREDATE>='1981/06/30' and
HIREDATE<='1981/12/31';
. List the different designation in the company.
mysql> select DISTINCT JOB from EMP;
List employees whose name either starts or end with 's'.
mysql> select ENAME from EMP where ENAME like 'S%' or ENAME like '%S';
List the name pf employees whose name have "i" as a second character.
mysql> select ENAME from EMP where ENAME like '_i%';
. List maximum, minimum and average salary in the company;
mysql> select min(SAL), max(SAL), avg(SAL) from EMP;
1. List the number of employee and average salary for employee in department 20.
mysql> select AVG(SAL), count(*) from EMP where DEPTNO='20';
2. List name ,salary and PF amout of all employees.
mysql> select ENAME,SAL,SAL*0.1 from EMP;
. List names of employee who are more than 2 years old in the company.
mysql> select ENAME from EMP where (1984-year(HIREDATE)>2)
List the employee name and hire date in descending order of the hire date.
mysql> select ENAME,HIREDATE from EMP order by HIREDATE desc;
