#include <bits/stdc++.h>
using namespace std;

int main ()
{

	int n, s, r;
	cin >> n >> s;

	r = s;

	while (n--)
	{
		int a;
		cin >> a;

		s += a;

		if (s < r)
		{
			r = s;
		}
	}

	cout << r << "\n";
	
	return 0;
}
