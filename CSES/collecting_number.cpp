#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, r = 0;
	cin >> n;

	map<ll,ll> num;
	
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		num[x] = i;
	}

	ll next = 1, index = n+1;
	map<ll,ll>::iterator itr;
	
	while (next <= n)
	{
		itr = num.find(next);

		if (itr->second < index)
			r++;
	    
		index = itr->second;
		next++;
	}

    cout << r << "\n";
	return 0;
}
