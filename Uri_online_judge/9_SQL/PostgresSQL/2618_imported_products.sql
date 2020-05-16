select prod.name, prov.name, cat.name from products prod join providers prov on prod.id_providers=prov.id join categories cat on prod.id_categories=cat.id where cat.name='Imported' and prov.name='Sansul SA';

