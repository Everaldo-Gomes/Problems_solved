#include <iostream>
using namespace std;

int main () {
	
	while (1) {

		int n = -1, m = 0, j = 0;
		cin >> n;

		if (n == 0) { break; }
		
		for (int i = 0; i < n; i++) {

			int value;
			cin >> value;

			if (value == 0) { m++; }
			else { j++; }
		}
		
		cout << "Mary won " << m << " times and John won " << j << " times" << endl;
	};

	return 0;
}
