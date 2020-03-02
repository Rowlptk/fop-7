use AdventureWorks2012

-- aggregate function
-- avg, sum, count, min, max
select * from Sales.SalesOrderDetail

select AVG(UnitPrice) as Average,
SUM(UnitPrice) as [Total Sum],
COUNT(UnitPrice) as [Total Price],
MAX(UnitPrice) as [Maximum Value],
MIN(UnitPrice) as [Minimum Value]
from Sales.SalesOrderDetail

-- group by
select * from Production.WorkOrderRouting

select WorkOrderID, Avg(ActualResourceHrs) as AverageActualResoucesHrs
from Production.WorkOrderRouting
group by WorkOrderID having Avg(ActualResourceHrs) < 3


-- join ==> inner join ==> common values
-- outer ==> full outer ==> all values
-- right outer ==> right ==> all, left ==> common
-- left outer ==> left ==> all , right ==> common

select * from Person.Person
select * from Person.Address

-- inner join
select A.FirstName, A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.Person A
inner join
Person.Address B
on
A.BusinessEntityID = B.AddressID order by A.BusinessEntityID

-- full outer join
select A.FirstName, A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.Person A
full outer join
Person.Address B
on
A.BusinessEntityID = B.AddressID order by A.BusinessEntityID

-- left outer join
select A.FirstName, A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.Person A
left outer join
Person.Address B
on
A.BusinessEntityID = B.AddressID order by A.BusinessEntityID

-- right outer join
select A.FirstName, A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.Person A
right outer join
Person.Address B
on
A.BusinessEntityID = B.AddressID order by A.BusinessEntityID

-- view
create view vwFop8 as
select A.FirstName, A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.Person A
inner join
Person.Address B
on
A.BusinessEntityID = B.AddressID

select * from vwFop8 order by BusinessEntityID


-- Stored Procedure
-- crud 

create table fop8
(
	id int,
	name varchar(30)
)

create procedure sp_fop8
@id int,
@name varchar(30),
@stmt varchar(30) = ''
as
Begin
	if @stmt = 'insert'
	begin
		insert into fop8 values(@id,@name);
	end
	if @stmt = 'select'
	begin
		select * from fop8 where id = @id and name = @name;
	end
	if @stmt = 'update'
	begin
		update fop8 set name = @name where id = @id;  
	end
	if @stmt = 'delete'
	begin
		delete from fop8 where id = @id and name = @name;
	end
end
select * from fop8
exec sp_fop8 @id = 1001, @name = 'Cisco' , @stmt = 'insert'
exec sp_fop8 @id = 1002, @name = 'Oracle' , @stmt = 'insert'
exec sp_fop8 @id = 1003, @name = 'Microsoft' , @stmt = 'insert'
exec sp_fop8 @id = 1002, @name = 'Oracle' , @stmt = 'select'
exec sp_fop8 @id = 1002, @name = 'Sun Corporation' , @stmt = 'update'
exec sp_fop8 @id = 1002, @name = 'Sun Corporation' , @stmt = 'delete'


-- trigger, error handling

create trigger myTriggerFop8
on fop8
for delete
as
	if 1003 in (select id from deleted)
	begin
		print 'Microsoft Cannot be deleted'
		rollback transaction
	end

delete from fop8 where id = 1003
select * from fop8


-- error handling
begin try
	declare @num int;
	select @num = 217/0;
	print @num;
end try
begin catch
	print 'Error'
	print ERROR_MESSAGE();
	print ERROR_Number();
	print ERROR_SEVERITY();
	Print ERROR_Line();
	print ERROR_STATE();
	throw;
end catch





















