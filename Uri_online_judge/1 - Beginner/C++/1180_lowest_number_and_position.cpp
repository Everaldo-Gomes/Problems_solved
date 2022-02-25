#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;
	
	int num[n], smallest = 99999999, position = 0;


	for (int i = 0; i < n; i++) {
		
		cin >> num[i];

		if (num[i] < smallest) {
			smallest = num[i];
			position = i;
		}
	}	

	cout << "Menor valor: " << smallest << endl;
	cout << "Posicao: " << position << endl;
	
	return 0;
}
