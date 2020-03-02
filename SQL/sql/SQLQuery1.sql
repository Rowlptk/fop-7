-- create database
create database qwerty

-- use database
use qwerty

-- delete database
drop database qwerty

create database fop8

use fop8

-- creating a table
create table students
(
	std_id int,
	std_name varchar(50)
)

-- view table
select * from students

/* data insert */
insert into students values
(101,'Anish'),(102,'Pukar'),(103,'Sandesh')

-- modify datatype in column
alter table students alter column std_id varchar(10)
insert into students values('101A','Shandeep')

select * from students

-- add column
alter table students add [contact no] numeric(10,0);

-- update data
update students
set [contact no] = 9801200101
where std_id = '101' 

-- delete column
alter table students drop column [contact no]

-- delete rows
delete from students where std_id = '101A'

select * from students

-- empty table
truncate table students

-- delete table
drop table students

-- constraints
create table school
(
	id int identity(101,1),
	name varchar(50) not null,
	contact numeric(10,0) unique not null,
	email varchar(80) null,
	fee money default 1000,
	mark int not null check(mark>=40 and mark<=100)
)

-- valid value
insert into school(name, contact, email, fee, mark)
values('Anish', 9801200100, 'anish@gmail.com', 2030.99,90),
('Sandesh', 9801200101,'sandesh@gmail.com',2033.67,85),
('Pukar',9801200102,'pukar@gmail.com',1200.88,91)

-- error in not null
insert into school(contact, email, fee, mark)
values(9801200103, 'anish@gmail.com', 2030.99,90)

-- error in unique
insert into school(name, contact, email, fee, mark)
values('X-men', 9801200100, 'anish@gmail.com', 2030.99,90)

-- null case
insert into school(name, contact, fee, mark)
values('X-men', 9801200103, 2030.99,90)

-- default case
insert into school(name, contact, mark)
values('X-men', 9801200104,90)

-- mark error
insert into school(name, contact, mark)
values('X-men', 9801200105,39)

-- fk,pk, adventurework database
select * from school










