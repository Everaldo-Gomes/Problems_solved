#include <iostream>
using namespace std;

int main () {

	while (1) {
		
		int k;
		cin >> k;

		if (k == 0) {
			break;
		}

		int a, b, pa = 0, pb = 0;
		
		while (k--) {
	
			cin >> a >> b;
			
			if (a > b) {
				pa++;
			}
			else if (a < b) {			
				pb++;
			}
		}

		cout << pa << " " << pb << endl;
	}
	
	return 0;

}
