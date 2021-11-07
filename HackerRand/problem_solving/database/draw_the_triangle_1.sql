DELIMITER $$

CREATE PROCEDURE print (arg INT)

BEGIN
    
    DECLARE x INT DEFAULT arg;

    WHILE x > 0 DO
        SELECT REPEAT('* ', x);
        SET x = x - 1;
    END WHILE;

END $$

DELIMITER ;

CALL print(20);
