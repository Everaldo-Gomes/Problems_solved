#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
	ll n;
	cin >> n;

	vector<ll> dice = {1,2,3,4,5,6};
	vector<ll> count(n+1);

	count[0] = 1;

	for (ll i = 1; i <= n; i++)
	{
		for (auto d : dice)
		{
			if (i - d >= 0)
			{
				count[i] += count[i - d];
				count[i] %= 1000000007;
			}
		}
	} 
	    
	cout << count[n] << "\n";
	return 0;
}



