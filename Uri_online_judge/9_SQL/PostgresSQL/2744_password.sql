select id, password, md5(password::text) from account;
/*on md5() only accept string '' so, to pass a column in this case is password
must convert it to text*/
