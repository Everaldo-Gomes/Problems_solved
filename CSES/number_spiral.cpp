#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n;
	cin >> n;

	while (n--)
	{
		ll r, c, a;
		cin >> r >> c;

		if (c <= r)
		{
			if (r % 2 == 0) 
				a = (r * r) - (c - 1);
			else
				a = (((r-1) * (r-1)) + 1) + (c - 1);
		}
		else
		{
			ll diff = c - r;
			a = (c * c) - (c - 1);
			
			if (c % 2 == 0)
				a -= diff;
			else
				a += diff;
		}
	    	
		cout << a << "\n";
	}
	
	return 0;
}
