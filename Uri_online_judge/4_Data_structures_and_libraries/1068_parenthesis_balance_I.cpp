#include <bits/stdc++.h>
using namespace std;

int main () {

	string s;
	
	while (cin >> s) {

		int p = 0;
		
		for (int i = 0; i < s.size(); i++) {

			if (s[i] == '(') {
				p++;
			}
			else if (s[i] == ')' && p <= 0) {
				p = -999999;
				break; 
			}
			else if (s[i] == ')') {
				p--;
			}
		}

		s = p == 0 ? "correct" : "incorrect";
		cout << s << endl;
	}
	
	return 0;
}
