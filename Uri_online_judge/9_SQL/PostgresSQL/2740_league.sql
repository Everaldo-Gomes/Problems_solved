(select concat('Podium: ',team) as name from league limit 3)
union all
(select concat('Demoted: ',team) as name from league where position >= 14);


