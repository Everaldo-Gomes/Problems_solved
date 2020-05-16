(select name, customers_number from lawyers order by customers_number desc limit 1)
//shows the highest value. limit 1 will show only one line

//union will untion more than one query. each query must be enclosed by (). Before the union dont put ;
union all

//shows the lowest value
(select name, customers_number from lawyers order by customers_number asc limit 1)

union all

// 'Average' is the new row that will be insert
(select 'Average', round(avg(customers_number),0) from lawyers);

