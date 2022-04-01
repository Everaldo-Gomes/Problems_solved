#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;

	while (cin >> n) {
		
		int pair = 0;
		int size[n];
		char side[n];
	    
		for (unsigned int i = 0; i < n; i++) {

			int boot_size;
			char boot_side;
			
			cin >> boot_size >> boot_side;
			size[i] = boot_size;
			side[i] = boot_side;
		}

		for (unsigned int i = 0; i < n; i++) {
			for (unsigned int j = i; j < n; j++) {
						
				if (size[i] == size[j] && j != i && size[i] != -1 && side[i] != side[j]) {
					pair++;
					size[i] = size[j] = -1;
					break;
				}
			}
		}
		
		cout << pair << endl;
	}
	
	return 0;
}
