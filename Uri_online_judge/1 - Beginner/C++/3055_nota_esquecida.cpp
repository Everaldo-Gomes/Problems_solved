#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n1, m;
	cin >> n1 >> m;

	for (int n2 = 0; n2 <= 100; n2++)
	{
		if ((n1 + n2) / 2 == m)
		{
			cout << n2 << "\n";
			break;
		}
	}
	
	return 0;
}
