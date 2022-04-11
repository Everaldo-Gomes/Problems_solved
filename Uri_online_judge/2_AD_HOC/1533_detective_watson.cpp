#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;

	while (1) {
		
		cin >> n;

		if (n == 0) {
			break;
		}
		
		int first = -1, second = -1, index_second = 0, index_first = 0;
		
		for (int i = 0; i < n; i++) {	

			int v;
			cin >> v;

			if (v > first) {
				second = first;
				first = v;
				index_second = index_first;
				index_first = i;
			}

			if (v < first && v > second) {
				second = v;
				index_second = i;
			}
		}
		
		cout << index_second + 1  << endl;
	}
    
	return 0;
}
