#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;
	getchar();
	
	while (n--) {

		int qnt = 0, a = 0, d = 0;
		string s;
		
		getline(cin, s);

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '.') {
				s.erase(s.begin() + i);
				i -= 1;
			}
		}
			
		for (int i = 1; i < s.size(); i++) {
			if (s[i-1] == '<' && s[i] == '>') {
				s.erase(s.begin() + i-1);
				s.erase(s.begin() + i-1);
				i = 0;
				qnt++;
			}
		}
	    
		cout << qnt << endl;
	}
	
	return 0;
}

		
