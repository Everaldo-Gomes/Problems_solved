SELECT 
    EMAIL AS Email

FROM
    (
        SELECT 
            Email, COUNT(*) AS qnt
        FROM 
            Person 
        GROUP BY Email 
    )
WHERE 
    qnt > 1
