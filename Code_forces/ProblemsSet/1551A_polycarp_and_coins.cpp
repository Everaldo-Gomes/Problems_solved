#include <bits/stdc++.h>
using namespace std;

int main () {

	long int n;
	cin >> n;

	while (n--) {

		int64_t value;
		cin >> value;

		int64_t c2 = round(value / 3);
		int64_t c1 = value - (c2 * 2);

		if (abs(c1 - c2) > 0) {
			
			while(abs(c1 - c2) > 1) {
				c1--;
				c2++;
			}
			
			if (abs(c1 - c2) == 0) {
				c1--;
			}
		}
		
		cout << c1 << " " << c2 << "\n";
	}
	
	return 0;
}
