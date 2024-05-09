insert into stud
values
(1,'ROHIT',55,66,77,NULL,NULL,NULL),
(2,'MOHIT',55,67,78,NULL,NULL,NULL),
(3,'VINAY',56,68,79,NULL,NULL,NULL),
(4,'AVI',58,69,80,NULL,NULL,NULL),
(5,'ANSHUL',88,77,99,NULL,NULL,NULL),
(6,'YASH',88,77,11,NULL,NULL,NULL),
(7,'AYUSH',88,10,11,NULL,NULL,NULL),
(8,'BALLU',20,10,11,NULL,NULL,NULL),
(9,'SUDARSHAN',33,10,11,NULL,NULL,NULL),
(10,'AKASH',09,10,11,NULL,NULL,NULL),
(11,'VIKAS',99,10,11,NULL,NULL,NULL);


create procedure calpercentage()
begin
declare s1,s2,s3,tot int(3);
declare per float(5,2);
declare grde varchar(20);
declare i,cnt,id int(10);
SET i=0;
select count(*) into cnt from stud;
while i<cnt do
select sno,sub1,sub2,sub3 into id,s1,s2,s3 from stud limit i,1;
SET tot=(s1+s2+s3);
SET per=tot/3;
if per>40 then
SET grde='PASS';
else
SET grde='FAIL';
end If;
SELECT tot,per,grde;
update stud SET total=tot,percentage=per,grade=grde where sno=id;
SET i=i+1;
end while;
end//
