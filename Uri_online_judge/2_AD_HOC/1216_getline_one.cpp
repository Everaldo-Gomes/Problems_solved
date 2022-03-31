#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	int distance, divisor = 0;
	string name;
	double ans = 0;
	
	while (getline(cin, name)) {
		
		cin >> distance;
		getchar();
		
		ans += distance;
		divisor++;
	}

	cout << setprecision(1) << fixed << ans / divisor << endl;
	
	return 0;
}
