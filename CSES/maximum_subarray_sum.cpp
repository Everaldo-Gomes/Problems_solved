#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, best = -11E9, sum = -11E9;
	cin >> n;

	vector<long long int> vec(n);
	
	for (int k = 0; k < n; k++)
		cin >> vec[k];

	
	for (int k = 0; k < n; k++)
	{
		sum = max(vec[k],sum + vec[k]);
		best = max(best,sum);
	}
	
	cout << best << "\n";
	
	return 0;
}
