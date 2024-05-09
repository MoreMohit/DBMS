create function gross(basic int(10))
returns float
begin
declare grsal,hra,da,ta float;
set hra=0.5*basic;
set da=basic;
set ta=0.2*(basic+hra);
set grsal=basic+hra+da+ta;
return grsal;
end
//


select gross(500)//


+------------+
| gross(500) |
+------------+
| 1400 |
+------------+
1 row in set (0.05 sec)
