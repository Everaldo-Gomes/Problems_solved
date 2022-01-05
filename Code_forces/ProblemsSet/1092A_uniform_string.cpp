#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int t;
	cin >> t;

	while (t--) {

		int n, k;
		cin >> n >> k;
		
		string final_string = "";
		char letter = 'a';

		for (int i = 0, counter = 1; i < n; i++) {

			final_string += letter;
			
			if (letter >= 'z' || counter >= k) {
				letter = 'a';
				counter = 1;
			}
			else {
				letter++;
				counter++;
			}
		}
	    
		cout << final_string << endl;
	}

	return 0;
}
