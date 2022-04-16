#include <bits/stdc++.h>
using namespace std;

int main () {

	int p, n;
	cin >> p;

	if (p == 1) {
		n = 1;
	}
	else if (p == 2 || p == 3) {
		n = 3;
	}
	else if (p == 4 || p == 5) {
		n = 5;
	}
	else if (p >= 6 && p <= 10) {
		n = 10;
	}
	else if (p >= 11 && p <= 25) {
		n = 25;
	}
	else if (p >= 26 && p <= 50) {
		n = 50;
	}
	else if (p >= 51 && p <= 100) {
		n = 100;
	}

	cout << "Top " << n << endl;
	
	return 0;
}
