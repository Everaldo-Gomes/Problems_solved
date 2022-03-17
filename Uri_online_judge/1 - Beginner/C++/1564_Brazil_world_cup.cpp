#include <iostream>
using namespace std;
 
int main() {

	int n;
	
	while (cin >> n) {
		
		string s = n == 0 ? "copa" : "duas";
		cout << "vai ter " << s << "!" << endl;
	}
	
    return 0;
}
