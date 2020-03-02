-- create database

create database qwerty

use qwerty

create table myTable
(
	std_id int identity(101,1),
	name varchar(30) not null,
	[contact number] numeric(10,0) unique
)

select * from myTable

insert into myTable(name, [contact number])
values('Sandesh',9801200100),('Pukar',9801200101),
('Shraddha',9801200102),('Anish',9801200103)

