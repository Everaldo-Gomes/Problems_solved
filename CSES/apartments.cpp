#include <bits/stdc++.h>
using namespace std;

#define ll long long int
 
int main ()
{
	ll n, m, k, r = 0;
	cin >> n >> m >> k;

	vector<ll> app(n), apt(m);
	
	for (ll i = 0; i < n; i++)
	 	cin >> app[i];
	
 	for (ll i = 0; i < m; i++)
 		cin >> apt[i];

	sort(app.begin(), app.end());
	sort(apt.begin(), apt.end());
    
	ll i = 0, j = 0;
	
	while (1)
	{
		bool c = false;
		
		if (apt[j] < app[i] - k)
		{
			if (j+1 < m)
			{
				c = true;
				j++;				
			}	
		}

		else if (apt[j] > app[i] + k)
		{
			if (i+1 < n)
			{
				c = true;
				i++;
			}
		}

		else if (apt[j] >= app[i] - k && apt[j] <= app[i] + k)
		{
			app[i] = apt[j] = 0;

			if (i+1 < n)
			{
				c = true;
				i++;
			}
			if (j+1 < m)
			{
				c = true;
				j++;				
			}
			
			r++;
		}
		
		if (!c)
			break;
	}
	
	cout << r << "\n";		
	return 0;
}
