select lg.name, round((lg.omega*1.618),3) as "The N Factor"
from dimensions d join life_registry lg on lg.dimensions_id = d.id
where d.name in ('C875','C774') and lg.name like 'Richard%';

