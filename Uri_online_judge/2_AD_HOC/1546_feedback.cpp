#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	while (n--) {

		int m;
		cin >> m;

		while (m--) {

			int p;
			cin >> p;

			if (p == 1)      { cout << "Rolien" << endl;   }
			else if (p == 2) { cout << "Naej" << endl;     }
			else if (p == 3) { cout << "Elehcim" << endl;  }
			else             { cout << "Odranoel" << endl; }
		}
		
	}
	return 0;
}
