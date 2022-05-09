#include <bits/stdc++.h>
using namespace std;

int main()
{
	short int t, v, ans = 0;
	cin >> t;

	
	for (int i = 0; i < 5; i++)
	{
		cin >> v;
		ans += v == t ? 1 : 0;
	}

	cout << ans << endl;
}
