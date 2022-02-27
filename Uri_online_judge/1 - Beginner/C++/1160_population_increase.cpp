#include <bits/stdc++.h>
using namespace std;

int main () {

	int t;
	cin >> t;

	while (t--) {

		int PA, PB, time = 0;
		double G1, G2;

		cin >> PA >> PB >> G1 >> G2;
		
		for (int i = 0; i < 100; i++) {

			time++;
			
			PA += PA * (G1 / 100);
			PB += PB * (G2 / 100);
		
			if (PA > PB) {
				break;
			}
		}
		
		if (PA < PB) {
			cout << "Mais de 1 seculo." << endl;
		}
		else {
			cout << time << " anos." << endl;
		}
	}
	
	return 0;
}
