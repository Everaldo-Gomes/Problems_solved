#include <bits/stdc++.h>
using namespace std;

int main () {

	int n, freq = 1;
	cin >> n;

	vector<int> num (n);
	
	for (int i = 0; i < n; i++) {
		cin >> num[i];		
	}

	sort(num.begin(), num.end());


	for (int i = 1; i <= n; i++) {

		if (num[i-1] == num[i]) {
			freq++;
		}
		else {
			cout << num[i-1] << " aparece " << freq << " vez(es)" << endl;
			freq = 1;
		}
	}
	
	
	return 0;
}
