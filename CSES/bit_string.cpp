#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, v = 1;
	cin >> n;
	
	for (ll i = 0; i < n; i++)
	{
		v *= 2;
		v %= 1000000000+7;
	}
	
	cout << v <<  "\n";
	return 0;
}



