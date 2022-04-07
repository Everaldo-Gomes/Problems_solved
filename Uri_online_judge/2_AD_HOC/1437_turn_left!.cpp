#include <bits/stdc++.h>
using namespace std;

int main () {	

	while(1) {

		int n;
		cin >> n;

		if (n == 0) { break; }

		int direction = 0;
		
		for (int i = 0; i < n; i++) {

			char command;
			cin >> command;
			
			if (command == 'D') {
				direction++;

				if (direction > 3) {
					direction = 0;
				}
			}
			else {
				direction--;
				if (direction < 0) {
					direction = 3;
				}
			}
		}

		char ans;
		if (direction == 0) {
			ans = 'N';
		}
		else if (direction == 1) {
			ans = 'L';
		}
		else if (direction == 2) {
			ans = 'S';
		}
		else if (direction == 3) {
			ans = 'O';
		}

		cout << ans << endl;

	}
	
	return 0;
}
/*
         N (0)
         |
         |
O (3) --------- L (1)
         |
         |
         S (2)
*/
