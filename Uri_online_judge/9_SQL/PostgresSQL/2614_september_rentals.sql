select cust.name, rent.rentals_date from customers cust join rentals rent on rent.id_customers=cust.id where rent.rentals_date >= '2016-09-01' and rent.rentals_date <= '2016-09-30';
