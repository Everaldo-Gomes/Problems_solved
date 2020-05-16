select prod.name from products prod join providers prov on prov.id=prod.id_providers where prod.amount between 10 and 20 and prov.name like 'P%';
/*prov.name like 'P%' is used to find if there is an 'P' in the prodvider's name*/
