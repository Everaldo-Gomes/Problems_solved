#include <bits/stdc++.h>
using namespace std;

int main () {

	while (1) {

		string s;
		getline(cin, s);

		if (s[0] == '*') { break; }

		char first = tolower(s[0]);
		bool is_tautogram = true;
		
		for (int i = 0; i < s.size(); i++) {

			if (s[i] == ' ' && tolower(s[i+1]) != first) {
				is_tautogram = false;
				break;
			}
		}

		char ans = is_tautogram ? 'Y' : 'N';
		cout << ans << endl;
	}
	
	return 0;
}
