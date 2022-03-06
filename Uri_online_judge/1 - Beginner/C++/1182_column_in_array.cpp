#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	int c;
	cin >> c;

	string s;
	cin >> s;
	
	double num[12][12], ans = 0;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {

			cin >> num[i][j];
			
			if (j == c) {
				ans += num[i][j];
			}
		}
	}

	ans = s == "S" ? ans : ans / 12;
	
	cout << setprecision(1) << fixed;
	cout << ans << endl;

	return 0;
}
