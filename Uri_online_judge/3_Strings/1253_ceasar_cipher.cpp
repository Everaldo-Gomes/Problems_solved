#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	while (n--) {

		string s;
		cin >> s;

		int shift;
		cin >> shift;		
		
		for (int i = 0; i < s.size(); i++) {

			int distance_Si_to_A = s[i] - 65;

			if (s[i] - shift >= 65) {
				s[i] -= shift;
			}
			else {
				s[i] = 'Z' - (shift - distance_Si_to_A)+1;
			}
			
			cout << s[i];
		}
		
		cout << "\n";
	}
	
	return 0;
}
