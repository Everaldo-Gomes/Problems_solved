#include <iostream>
using namespace std;

long long int fac (long long n);


int main() {

	long long int m, n;
	
	while (cin >> m >> n) {

		long long int ans = fac (m) + fac (n);
		cout << ans << endl;
	}
	
    return 0;
}


long long int fac (long long n) {
	
	if (n == 2) return n;
	else if (n == 0 || n == 1) return 1;
	return n * fac (n - 1);
}
