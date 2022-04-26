#include <bits/stdc++.h>
using namespace std;

struct String {

	int order;
	int length;
	string s;
};

String myStrings[50];

int main () {

	int n;
	cin >> n;

	getchar();

	while (n--) {

		string s;
		getline(cin, s);

		string get_str = "";
		int str_len = 0, str_qnt = 0;

		//get and save strings
		for (int i = 0; i < s.size(); i++) {
			
			if (s[i] != ' ') {
				get_str += s[i];
				str_len++;
			}
			if (s[i] == ' ' || i >= s.size()-1) {
				myStrings[str_qnt].order = str_qnt;
				myStrings[str_qnt].length = str_len;
				myStrings[str_qnt].s = get_str;
				get_str = "";
				str_len = 0;
				str_qnt++;
			}
		}

		// sort
		for (int i = 0; i < str_qnt; i++) {
			for (int j = 1; j < str_qnt; j++) {
				if (myStrings[j-1].length <  myStrings[j].length) {
					swap(myStrings[j-1], myStrings[j]);
				}
			}
		}

		// show
		for (int i = 0; i < str_qnt; i++) {

			cout << myStrings[i].s;

			if (i < str_qnt-1) {
				cout << " ";
			}
		}
	    
		cout << endl;
	}
	
	return 0;
}
