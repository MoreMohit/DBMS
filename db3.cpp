create database online_shop;

create table persons ( personID int, personName char, age int );

alter table persons modify personID int primary key;

desc persons

create table orders
(
orderID int not null,
orderNumber int not null,
personID int ,
primary key(orderID),
foreign key(personID) references persons(personID)
)
;
desc orders;
alter table orders add personsIntrestID char(30);
alter table orders modify personsIntrestID char(20);
alter table orders rename column personsIntrestID to IntrestID;
drop table orders
desc orders;
