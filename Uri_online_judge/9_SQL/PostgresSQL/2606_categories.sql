select prod.id, prod.name from products prod 
join categories cat on cat.id=prod.id_categories 
where cat.name like 'super%';
