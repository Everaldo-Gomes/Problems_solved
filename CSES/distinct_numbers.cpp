#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long n, ptr = 0, r = 1;
	cin >> n;

	vector<int> num(n);
	
	for (long long int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	sort(num.begin(), num.end());
    
	for (unsigned long long int i = 1; i < num.size(); i++)
	{
		if (num[ptr] != num[i])
		{
			ptr = i;
			r++;
		}
	}

	cout << r << "\n";
	
	return 0;
}
