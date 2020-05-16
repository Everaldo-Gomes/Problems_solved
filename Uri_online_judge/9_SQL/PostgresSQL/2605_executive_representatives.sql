select prod.name, prov.name from products prod join providers prov on prov.id=prod.id_providers join categories cat on cat.id=prod.id_categories where cat.id=6;
