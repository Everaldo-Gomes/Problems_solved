DELIMITER $$

CREATE PROCEDURE print (arg INT)

BEGIN

    DECLARE x INT DEFAULT 1;
    
    WHILE x <= arg DO
        SELECT REPEAT('* ', x);
        SET x = x + 1;
    END WHILE;
    
END $$

DELIMITER ;


CALL print(20);
