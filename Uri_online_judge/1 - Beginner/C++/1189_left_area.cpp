#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	string op;
	cin >> op;

	double ans = 0, divisor = 0;
	int left = 0;
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {

			double value;
			cin >> value;

			if (i > 0 && i < 11 && j < left) {
				ans += value;
				divisor++;
			}
		}
		
		if (left < 5 && i < 6) {
			left++;
		}

		if (i >= 6) {
			left--;
		}
		
	}

	ans = op == "S" ? ans : ans / divisor;
	cout << setprecision(1) << fixed << ans << endl;
	
	return 0;
}
