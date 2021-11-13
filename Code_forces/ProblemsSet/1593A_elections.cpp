#include <bits/stdc++.h>
using namespace std;

int main () {

	int t = 0;
	cin >> t;

	while (t--) {

		long int a = 0, b = 0, c = 0, greatest = 0, mininum = 0, i = -1, j = -1;
		cin >> a >> b >> c;

		// case 0: all numbers are equal
		if (a == b && a == c) {
			a = b = c = 1;
		}
		else {

			greatest = max(a, b);
			greatest = max(greatest, c);

			if      (greatest == a) i = 0;
			else if (greatest == b) i = 1;
			else if (greatest == c) i = 2;
			
			mininum = min(a, b);
			mininum = min(mininum, c);
			
			if      (mininum == a) j = 0;
			else if (mininum == b) j = 1;
			else if (mininum == c) j = 2;

            // case 1: two numbers are equal and the third is less than the others	
			if ((a == b && a != c && c < a) ||
				(a == c && a != b && b < a) ||
				(b == c && b != a && a < b)) {

				if (a == b) {
					a = b = 1;
				}
				else if (a == c) {
					a = c = 1;
				}
				else if (b == c) {
					b = c = 1;
				}

				if (j == 0) {
					a = greatest - mininum + 1;
				}
				else if (j == 1) {
					b = greatest - mininum + 1;
				}
				else if (j == 2) {
					c = greatest - mininum + 1;
				}
			}

			// case 1: all numbers are different
			// case 2: two numbers are equal and the third is greater than the others
			else {
				if (i != 0)
					a = greatest - a + 1;
				else
					a = 0;
			
				if (i != 1)
					b = greatest - b + 1;
				else
					b = 0;
			
				if (i != 2)
					c = greatest - c + 1;
				else
					c = 0;
			}
		}
	    
		cout << a << " " << b << " " << c <<  endl;
	}

	return 0;
}
