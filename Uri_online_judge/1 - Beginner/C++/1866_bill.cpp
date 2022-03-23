#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	while (n--) {

		int value;
		cin >> value;

		int ans = value % 2 == 0 ? 0 : 1;
		cout << ans << endl;
	}		
	
    return 0;
}
