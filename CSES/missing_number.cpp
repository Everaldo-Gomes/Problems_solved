#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int n, sum = 0, original = 0;
	cin >> n;
	
	for (long long i = 0; i < n-1; i++)
	{
		long long int v;
		cin >> v;
		sum += v;
	}

	for (long long i = 1; i <= n; i++)
	{
		original += i;
	}

	cout << abs(sum - original) << "\n";
	
	return 0;
}
