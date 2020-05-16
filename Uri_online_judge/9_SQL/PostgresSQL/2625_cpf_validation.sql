select concat(substr(cpf,1,3), '.', substr(cpf,4,3), '.', substr(cpf,7,3), '-', substr(cpf,10,2)) from natural_person;

/*
concat() -> concatenate all substrings
substr() -> get some string (in this case cpf), take from the first to third element (cpf,1,3)

Then for each substring put a point or a dash

*/
