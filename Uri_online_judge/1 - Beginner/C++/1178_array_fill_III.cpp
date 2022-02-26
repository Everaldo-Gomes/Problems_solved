#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main () {

	double x;
	cin >> x;

	for (int i = 0; i < 100; i++) {

		cout << setprecision(4) << fixed;
		cout << "N[" << i << "] = " << x << endl;
		
		x /= 2;
	}
	
	return 0;
}
