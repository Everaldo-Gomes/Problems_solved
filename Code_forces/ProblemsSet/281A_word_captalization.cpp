#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){

	string a;
	cin >> a;
	
	if(islower(a[0])){	
			putchar(toupper(a[0]));
		for(int i = 1; i < a.length(); i++) 
			cout << a[i];	
	}
	else cout << a << endl;
	
	return 0;
}