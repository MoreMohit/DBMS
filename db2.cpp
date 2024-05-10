create database company;

create table employee
(EMPNO int(10) not null,
JOB char(15),
MGR int(10),
HIREDATE date,
SAL int(10),
DEPTNO int(10),
primary key(EMPNO)
)

create table department
(DEPTNO int(10),
DNAME char(20),
LOC char(20),
primary key(DEPTNO)
)

create table dependant (DNAME char(20), GENDER char(20), RELETIONSHIP char(20) );

create table project
(PNO int(20),
PNAME char(20),
LOC char(20)
)
alter table project modify PNO int(20) primary key;

create table T3NF
(EMPNO int(10),
JOB char(15),
DEPTNO int(10)
);

alter table employee drop DEPTNO;

desc employee;


