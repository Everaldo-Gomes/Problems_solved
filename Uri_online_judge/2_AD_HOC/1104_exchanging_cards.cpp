
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	while (1)
	{
		// getting values
		ll a, b, r = 0;
		cin >> a >> b;
		
		if (a == 0 && b == 0)
			break;

		vector<ll> alice(a), betty(b);
	
		for (size_t i = 0; i < a; i++)
			cin >> alice[i];

		for (size_t i = 0; i < b; i++)
			cin >> betty[i];

		
		// removing duplicated
		vector<ll> al, bt;
		
		for (size_t i = 0; i <= a - 1; i++)
		{
			if (alice[i] != alice[i+1])
				al.push_back(alice[i]);
		}

		for (size_t i = 0; i <= b - 1; i++)
		{
			if (betty[i] != betty[i+1])
				bt.push_back(betty[i]);
		}
		
	    
		// find out which one is the greatest
		if (al.size() > bt.size())
		{
			for (size_t i = 0; i < bt.size(); i++)
			{
				if (!binary_search (al.begin(), al.end(), bt[i]))
					r++;
			}
		}

		// do the same thing, only change the vectors
		else
		{
			for (size_t i = 0; i < al.size(); i++)
			{
				if (!binary_search (bt.begin(), bt.end(), al[i]))
					r++;
			}			
		}

		cout << r << "\n";
	}
	
    return 0;
}
