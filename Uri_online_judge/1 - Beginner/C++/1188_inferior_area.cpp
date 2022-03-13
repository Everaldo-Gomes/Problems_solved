#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	string op;
	cin >> op;

	double ans = 0;
	int left = 5, right = 6, divisor = 0;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {

			double value;
			cin >> value;

			if (i > 6 && j >= left && j <= right) {
			 	ans += value;
				divisor++;
			}
		}

		if (i > 6) {
			left--;
			right++;
		}
	}

	ans = op == "S" ? ans : ans / divisor;
	cout << setprecision(1) << fixed << ans << endl;
	
	return 0;
}
