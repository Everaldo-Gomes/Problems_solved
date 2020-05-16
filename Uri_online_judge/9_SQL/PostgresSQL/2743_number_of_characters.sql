select name, char_length(name) as length from people order by length desc;
/*
char_length(string) returns the size of the string.
as length is a "variable that we want to "store" the values
*/
