#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
	string str;
	cin >> str;

	int len = str.size(), count_upper = 0, count_lower = 0;
	for(int i = 0; i < len; i++){
		if(isupper(str[i])) count_upper++;
		else if(islower(str[i])) count_lower++;
	}

	if(count_upper <= count_lower){
		for(int i = 0; i < len; i++)
			putchar (tolower(str[i]));
	}
	else 
		for(int i = 0; i < len; i++)
			putchar (toupper(str[i]));

	return 0;
}