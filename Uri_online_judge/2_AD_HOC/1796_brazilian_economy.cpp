#include <bits/stdc++.h>
using namespace std;

int main () {

	int n, m, bad = 0, good = 0;
	cin >> n;

	while (n--) {
		
		cin >> m;

		if (m == 0) { good++; }
		else        { bad++;  }
	}

	char ans = bad >= good ? 'N' : 'Y';
	cout << ans <<  endl;   
	
	return 0;
}
