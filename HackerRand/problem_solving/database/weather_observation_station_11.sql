select distinct CITY from STATION where 
(not (CITY like 'A%' or CITY like 'E%' or CITY like 'I%' or CITY like 'O%' or CITY like 'U%')) 
or
(not (CITY like '%a' or CITY like '%e' or CITY like '%i' or CITY like '%o' or CITY like '%u'));  
