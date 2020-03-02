use fop8

create table patient
(
	p_id int primary key,
	p_name varchar(30),
	p_age tinyint
)
go
create table pservice
(
	s_id int foreign key references patient(p_id),
	s_name varchar(50),
	s_qty tinyint
)

insert into patient values (101,'Anish',80),(102,'Shraddha',90),
(103,'Pukar',92),(104,'Sandesh',98)

select * from patient

insert into pservice values (104,'Ac Room',1),(101,'Medicine',2)

select * from pservice

insert into pservice values (105, 'Blood Test',4)


-- create schema and use in table
CREATE SCHEMA hospital 

create table hospital.employee
(
id int
)


-- AdventureWorks 2012/2014
select left ('International',5);

use AdventureWorks2012

-- display all columns
select * from HumanResources.Employee

-- display specific column
select BusinessEntityID, JobTitle from HumanResources.Employee

-- concatenate column
select convert(varchar(10),BusinessEntityID)+'==>'+JobTitle as myColumn
from HumanResources.Employee

-- computed column
select * from Production.ProductCostHistory

select ProductID, StandardCost, StandardCost * 0.15 as Discount
from Production.ProductCostHistory

-- distinct values
select distinct ProductID from Production.ProductCostHistory

-- top values
select distinct top 10 ProductID from Production.ProductCostHistory

select distinct top 10 percent ProductID from Production.ProductCostHistory

-- order by ==> asc/desc
select distinct top 10 percent ProductID from Production.ProductCostHistory
order by ProductID desc

-- wild card, _,%
select * from Person.Person

select * from Person.Person where FirstName like '_a_i'
select * from Person.Person where LastName like 'D%i'
select * from Person.Person Where PersonType like '[GSI]C'
select * from Person.Person Where PersonType like '[^G]C'

--select with where
select standardCost from Production.ProductCostHistory
where StandardCost>=20 and StandardCost<=50

-- aggregate function, groupby, joins, view, stored procedure, trigger
-- error handling