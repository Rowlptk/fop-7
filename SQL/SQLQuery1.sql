-- Create Database
create database qwerty

-- use database
use qwerty

-- delete database
drop database qwerty

/* Multi
line
comment*/
create database fop7 

use fop7

-- Creating A table
create table students
(
	std_id int,
	std_name varchar(50) 
)

-- view table
select * from students

-- insert data
insert into students values (101, 'Sadhit'),
(102,'Mingmar')

insert into students values('103A','X-men');
-- modify datatype in column
alter table students alter column std_id varchar(10);

-- add column
alter table students add [contact number] numeric(10,0);

select * from students

--update data
update students
set [contact number] = 9801200101
where std_id = '101'

-- delete column
alter table students drop column [contact number]

-- delete rows
delete from students where std_id = '103A'

select * from students

-- empty table
truncate table students

-- delete table
drop table students

-- constraints
create table school
(
	id int identity(201,1),
	name varchar(50) not null,
	[Contact no]  numeric(10,0) unique not null,
	email varchar(80) null,
	fee money default 1000,
	mark int not null check (mark>=40 and mark<=100)
)

insert into school(name, [Contact no], email, fee, mark)
values('Smith',9801200100, 'smith@gmail.com', 2340.89,80),
('John Doe', 9801200101,'john@gmail.com',1500,90)

-- error not null
insert into school( [Contact no], email, fee, mark)
values(9801200102, 'smith@gmail.com', 2340.89,80)

-- error unique
insert into school(name, [Contact no], email, fee, mark)
values('Aaloo',9801200101, 'smith@gmail.com', 2340.89,80)

-- email null
insert into school(name, [Contact no],  fee, mark)
values('Aaloo',9801200102, 2340.89,80)

-- default case
insert into school(name, [Contact no], mark)
values('Cauli',9801200103, 80)

-- error in check
insert into school(name, [Contact no], mark)
values('Tomato',9801200104, 30)
select * from school
