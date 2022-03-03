#include <bits/stdc++.h>
using namespace std;

int main () {

	int value, even[5], odd[5], ep = 0, op = 0;
	
	for (int i = 0; i < 15; i++) {
		
		cin >> value;

		// separete values
		if (value % 2 == 0) {
			even[ep] = value;
			ep++;
		}
		else {
			odd[op] = value;
			op++;
		}

		// show values when array are full
		if (ep == 5) {
			for (int j = 0; j < ep; j++) {
				cout << "par[" << j << "] = " << even[j] << endl;
			}
			ep = 0;
		}

		if (op == 5) {
			for (int j = 0; j < op; j++) {
				cout << "impar[" << j << "] = " << odd[j] << endl;
			}
			op = 0;
		}
	}

	// show remaining value
	for (int j = 0; j < op; j++) {
		cout << "impar[" << j << "] = " << odd[j] << endl;
	}

	for (int j = 0; j < ep; j++) {
		cout << "par[" << j << "] = " << even[j] << endl;
	}
	
	return 0;
}
