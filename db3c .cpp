insert into student
values
(1,'ROHIT',55,66,77,NULL,NULL),
(2,'MOHIT',55,66,77,NULL,NULL),
(3,'VINAY',57,68,79,NULL,NULL),
(4,'AVI',58,69,70,NULL,NULL),
(5,'ANSHUL',90,90,90,NULL,NULL),
(6,'YASH',65,45,75,NULL,NULL),
(7,'AYUSH',52,60,50,NULL,NULL),
(8,'BALLU',67,46,75,NULL,NULL),
(9,'SUDARSHAN',30,40,50,NULL,NULL),
(10,'AAKASH',20,30,40,NULL,NULL);
 //
 
 
create procedure calgrade()
begin
declare s1,s2,s3,tot int(3);
declare id int(10);
declare per float(5,2);
declare sname varchar(10);
declare i,cnt int(3);
DECLARE stu_cur CURSOR FOR select sno,name,sub1,sub2,sub3 from student;
SET i=0;
select count(*) into cnt from student;
OPEN stu_cur;
REPEAT
FETCH stu_cur INTO id,sname,s1,s2,s3;
SET tot=(s1+s2+s3);
SET per=(tot/3);
IF per >= 60 THEN
insert into student_first values (id,sname,s1,s2,s3,tot,per);
ELSEIF per<60 and per>=50 THEN
insert into student_pass values (id,sname,s1,s2,s3,tot,per);
ELSE
insert into student_fail values (id,sname,s1,s2,s3,tot,per);
END IF;
update student set total=tot,percentage=per where sno=id;
SET i=i+1;
UNTIL i>=cnt END REPEAT;
CLOSE stu_cur;
end
 //
