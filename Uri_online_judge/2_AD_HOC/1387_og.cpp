#include <iostream>
using namespace std;

int main () {

	while (1) {
		
		int l, r;
		cin >> l >> r;

		if (l == 0 && r == 0) {
			break;
		}
	
		cout << l + r << endl;
	}
	
	return 0;
}
