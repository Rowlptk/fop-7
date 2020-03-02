use AdventureWorks2012

-- aggregate function
-- avg, sum, count, min, max
select * from Sales.SalesOrderDetail

select 
AVG(UnitPrice) as Average,
SUM(UnitPrice) as TotalSum,
Count(UnitPrice) as TotalCount,
Max(UnitPrice) as MaximumValue,
Min(UnitPrice) as MinimumValue
from sales.SalesOrderDetail

-- group by
select * from Production.WorkOrderRouting

select WorkOrderId, Avg(ActualResourceHrs) 
as Average from Production.WorkOrderRouting
group by WorkOrderID

-- join
--inner, outer ==> right, left, full
select * from Person.Person
select * from Person.Address

--inner join/ full  outer join
create view vwmeroExp as
select A.FirstName, A.LastName, B.city, A.BusinessEntityID,
 B.AddressID
from
Person.Person A
full outer join
Person.Address B
on
A.BusinessEntityID = B.AddressID


select * from vwmeroExp

-- stored procedure
-- CRUD

use fop7
create table myTable
(
	id int,
	name varchar(30)
)



create procedure sp_myprocess
@id int,
@name varchar(30),
@stmt varchar(30) = ''
as
Begin
	if @stmt = 'insert'
	begin
		insert into myTable values(@id, @name)
	end
	if @stmt = 'select'
	begin
		select * from myTable
	end
	if @stmt = 'update'
	begin
		update myTable set name = @name where id= @id
	end
	if @stmt = 'delete'
	begin
		delete from myTable where id=@id;
	end

end

exec sp_myprocess @id = 1, @name='Ravan', @stmt = 'insert' 
exec sp_myprocess @id = 2, @name='Daku', @stmt = 'insert' 
exec sp_myprocess @id = 1, @name='Ravan', @stmt = 'select' 
exec sp_myprocess @id = 1, @name='Raban', @stmt = 'update'
exec sp_myprocess @id = 2, @name='', @stmt = 'delete'


create trigger myTrigger
on myTable
for delete
as
	if 2 in (select id from deleted)
	begin
		print 'Daku lai delete grana mildaina'
		rollback transaction;
	end

delete from myTable where id=2
select * from myTable

-- error handling
begin try
	declare @num int
	select @num = 217/0;
	print @num;
end try
begin catch
	print 'Error'
	print ERROR_MESSAGE();
	print ERROR_NUMBER();
	Print ERROR_LINE();
	Print ERROR_SEVERITY();
	Print ERROR_STATE();
	throw;
end catch







