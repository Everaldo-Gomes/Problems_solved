select co.CONTINENT, floor(avg(ct.POPULATION)) from CITY ct join COUNTRY co on ct.COUNTRYCODE  = co.CODE group by co.CONTINENT; 
