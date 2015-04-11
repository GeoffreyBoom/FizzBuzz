PRAGMA recursive_triggers = true;
drop table if exists fizzbuzz;
create table fizzbuzz(id int, fizz varchar(4), buzz varchar(4));
create trigger oninsert after insert on fizzbuzz when new.id < 100
BEGIN
  update fizzbuzz set fizz='fizz' where id%3=0;
  update fizzbuzz set buzz='buzz' where id%5=0;
  insert into fizzbuzz (id) Values(new.id+1);
END;
insert into fizzbuzz(id) values(1);
