#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main () {

	double matrix[12][12], sum = 0.0;

	int l;
	cin >> l;

	string op;
	cin >> op;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {

			cin >> matrix[i][j];

			if (i == l) {
				sum += matrix[i][j];
			}
		}
	}

	sum = op == "S" ? sum : sum / 12;
	cout << setprecision(1) << fixed << sum << endl;
		
	return 0;
}
