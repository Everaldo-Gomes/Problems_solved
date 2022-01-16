#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;
	
	while (n--) {

		long long val, ma = -1, ans = 0;
		cin >> val;
		
		vector<long long int> num;

		while (val--) {
			
			long long x;
			cin >> x;

			if (x != ma) { // preventing from insert repetead max numbers
				num.push_back(x);
				ma = max(x, ma);
			}
		}

		for (int j = 0; j < num.size(); j++) {
			ans = max(ans, ma - num[j]);
		}

		cout << ans << endl;
	}
	
	return 0;
}
