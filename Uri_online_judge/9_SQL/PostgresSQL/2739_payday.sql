select name, cast(extract(day from payday) as int) from loan;
//extract() is used to retrieves subfields such as year or hour from date/time values.
//cast() converts a value (of any type) into a specified datatype, in this case into int
