#include <iostream>
using namespace std;

int get_int (char s);

int main () {

	while (1) {
		
		int k;
		cin >> k;

		if (k == 0) {
			break;
		}
		
		int division_x, division_y;
		cin >> division_x >> division_y;

		while (k--) {
		
			int redidence_x, redidence_y;
			cin >> redidence_x >> redidence_y;

			if (redidence_x < division_x && redidence_y > division_y) {
				cout << "NO" << endl;
			}
			else if (redidence_x > division_x && redidence_y > division_y) {
				cout << "NE" << endl;
			}
			else if (redidence_x > division_x && redidence_y < division_y) {
				cout << "SE" << endl;
			}
			else if (redidence_x < division_x && redidence_y < division_y) {
				cout << "SO" << endl;
			}
			else if (redidence_x == division_x || redidence_y == division_y) {
				cout << "divisa" << endl;
			}
		}
	}
	
	return 0;

}
