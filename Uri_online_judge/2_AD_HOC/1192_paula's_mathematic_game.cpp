#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int get_int (char s);

int main () {

	int n;
	cin >> n;

	while (n--) {

		string s;
		cin >> s;
		
		char c = s[1];
		int a = get_int(s[0]);
		int b = get_int(s[2]);
		
		if (isupper(c) && a != b) {	
			cout << b - a << endl;
		}
		else if (islower(c) && a != b) {
			cout << a + b << endl;
		}
		else if (a == b) {
			cout << a * b << endl;
		}
	}
	
	return 0;
}


int get_int (char s) {

	stringstream ss;
	ss << s;

	int n;
	ss >> n;

	return n;
}
