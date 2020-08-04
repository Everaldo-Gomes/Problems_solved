select CITY ct, length(CITY) ch from STATION order by ch asc, ct asc limit 1;
select CITY ct, length(CITY) ch from STATION order by ch desc, ct asc limit 1;
