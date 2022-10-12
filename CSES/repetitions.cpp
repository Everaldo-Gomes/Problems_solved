#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int r = 0, c = 1, ptr = 0;
	string s;
	cin >> s;
	
	for (unsigned int i = 1; i < s.size(); i++)
	{
		if (s[ptr] == s[i])
		{
			c++;
		}
		else
		{
			ptr = i;
			r = max(r, c);
			c = 1;
		}
	}

	r = max(r, c);
	
	cout << r << "\n";
	return 0;
}
