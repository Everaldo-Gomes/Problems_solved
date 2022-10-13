#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
	ll n;
	cin >> n;

	map<string,ll> sys;
	
	while (n--)
	{
		string name;
		cin >> name;

		if (sys[name] == 0)
			cout << "OK\n";
		else			
			cout << name << sys[name] << "\n";
	    
		sys[name]++;
	}
	
	return 0;
}
