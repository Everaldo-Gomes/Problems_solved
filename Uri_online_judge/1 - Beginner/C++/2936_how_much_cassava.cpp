#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, c, d, e, r = 0;
	cin >> a >> b >> c >> d >> e;

	r += 300  * a;
	r += 1500 * b;
	r += 600  * c;
	r += 1000 * d;
	r += 150  * e;

	cout << r + 225 << "\n";
		    
	return 0;
}
