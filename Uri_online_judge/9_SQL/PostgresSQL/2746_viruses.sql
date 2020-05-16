/*
this update correctly:
     update virus set name = replace(name,'H1','X');

but to repalce and show:
*/
select replace(name,'H1','X') as name from virus;

