#include <iostream>
using namespace std;
 
int main() {

	int n;
	cin >> n;
	getchar();
	
	while (n--) {
	
		string m;
		getline (cin, m);

		// shift
		for (int i = 0; i < m.size(); i++) {

			if ((m[i] >= 65 && m[i] <= 90) || (m[i] >= 97 && m[i] <= 122)) {
				m[i] = m[i] + 3;		
			}
		}

		// reverse		
		for (int i = 0, j = m.size()-1; i < m.size()/2; i++, j--) {
			swap(m[i], m[j]);
		}

		// move
		for (int i = m.size()/2; i < m.size(); i++) {
			m[i] = m[i] - 1;
		}

		// show
		for (int i = 0; i < m.size(); i++) {
			cout << m[i];
		}
		
		cout << "\n";
	}
	
    return 0;
}
