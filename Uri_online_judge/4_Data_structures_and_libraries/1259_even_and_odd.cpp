#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	vector<int> num_even;
	vector<int> num_odd;
	
	for (int i = 0; i < n; i++) {

		int v;
		cin >> v;

		if (v % 2 == 0) { num_even.push_back(v); }
		else { num_odd.push_back(v); }
	}

	sort(num_even.begin(), num_even.end());
	sort(num_odd.begin(), num_odd.end(), greater<int>());
	
	for (int i = 0; i < num_even.size(); i++) {
		cout << num_even[i] << endl;
	}

	for (int i = 0; i < num_odd.size(); i++) {
		cout << num_odd[i] << endl;
	}
	
	return 0;
}
