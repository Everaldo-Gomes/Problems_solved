#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, c, d, r;
	cin >> a >> b >> c >> d;

	if (a == 1)
		r = 1;
	else if (b == 1)
		r = 2;
	else if (c == 1)
		r = 3;
	else
		r = 4;

	cout << r << "\n";
		    
	return 0;
}
