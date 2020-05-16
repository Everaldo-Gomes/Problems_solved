select mov.id, mov.name from movies mov join genres gen on gen.id=mov.id_genres where gen.description='Action';

