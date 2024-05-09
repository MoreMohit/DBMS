create table account
(
acc_no int(20),
name varchar(20),
amount int(20)
);

insert into account
values
(1,'MOHIT',2000),
(2,'ROHIT',3000),
(3,'VINAY',6000),
(4,'AVI',7000),
(5,'ANSHUL',8000)
;

create table account_log
(
acc_no int(20),
name varchar(20),
amount int(20),
tran_type varchar(20),
tran_time timestamp)
;

DELIMITER //
CREATE TRIGGER acc_log
AFTER UPDATE
ON account
FOR EACH ROW
BEGIN
DECLARE tran_type VARCHAR(20);
DECLARE amt VARCHAR(20);

IF old.amount > new.amount THEN
SET tran_type = 'Withdraw';
SET amt = old.amount - new.amount;
ELSE
SET tran_type = 'Deposited';
SET amt = new.amount - old.amount;
END IF;

INSERT INTO account_log VALUES(old.acc_no, old.name, amt, tran_type, NOW());
END;
 //
 
 
update account set amount=5000 where acc_no=1
select * from account;
select * from account_log;
update account set amount=4000 where acc_no=1;
select * from account
select * from account_log;

