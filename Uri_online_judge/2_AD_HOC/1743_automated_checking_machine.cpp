#include <bits/stdc++.h>
using namespace std;

int main () {	

	vector<int> con1(5);
	vector<int> con2(5);
	int compatible = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> con1[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cin >> con2[i];
	}

	for (int i = 0; i < 5; i++) {
		
		if (con1[i] != con2[i]) {
			compatible++;
		}
	}

	string s = compatible == 5 ? "Y" : "N";
	cout << s << endl;
    
	return 0;
}
