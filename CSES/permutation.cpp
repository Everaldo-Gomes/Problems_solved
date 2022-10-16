#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	if (n == 1 || n > 3)
	{
		for (long long int i = n; i >= 1; i--)
		{
			if (i % 2 != 0)
			{
				cout << i << " ";		
			}
		}

		for (long long int i = n; i >= 1; i--)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";			
			}
		}
	}
	else
	{
		cout << "NO SOLUTION\n";
	}

    
	return 0;
}
