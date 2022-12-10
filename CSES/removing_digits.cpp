#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
	ll n, r = 0;
	cin >> n;

	while (n > 0)
	{
		string num = to_string(n);
		ll m = 0;
		
		for (ll i = 0; i < num.size(); i++)
		{
			// char start from 48 in ASCII table
			ll x = num[i] - 48;
			m = max(m, x);
		}

		n -= m;
		r++;
	}

	cout << r << "\n";
	return 0;
}
