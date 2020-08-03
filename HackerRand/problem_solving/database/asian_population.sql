select sum(ct.POPULATION) from CITY ct join COUNTRY co on ct.COUNTRYCODE = co.CODE where co.CONTINENT = 'Asia';
