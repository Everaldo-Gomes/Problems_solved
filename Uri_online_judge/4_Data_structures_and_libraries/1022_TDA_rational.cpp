#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	while (n--) {

		int n1, d1, n2, d2;
		char b1, b2, s;

		cin >> n1 >> b1 >> d1 >> s >> n2 >> b2 >> d2;
		
		if (s == '/') {
			swap(n2, d2);
			s = '*';
		}

		int n1_n2, mmc = d1 * d2;
		int a = mmc / d1 * n1;
		int b = mmc / d2 * n2;
		
		if (s == '+') {
			n1_n2 = a + b;
		}
		else if (s == '-') {
			n1_n2 = a - b;
		}
		else if (s == '*') {
			n1_n2 = n1 * n2;
			mmc = d1 * d2;
		}

		cout << n1_n2 << "/" << mmc << " = ";

		// simplify
		long int simplify = 1;
		while (simplify <= 1000) {
			
			if (n1_n2 % simplify == 0 && mmc % simplify == 0) {
				n1_n2 /= simplify;
				mmc /= simplify;
				simplify = 1;
			}
			 
			simplify++;
		}
			    
		cout << n1_n2 << "/" << mmc << endl;	
	}
	
	return 0;
}
