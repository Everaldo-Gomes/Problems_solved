#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	string op;
	cin >> op;

	double ans = 0, divisor = 0;
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {

			double value;
			cin >> value;
				
			if (j > i) {
				ans += value;
				divisor++;
			}
		}
	}

	ans = op == "S" ? ans : ans / divisor;
	cout << setprecision(1) << fixed << ans << endl;
	
	return 0;
}
