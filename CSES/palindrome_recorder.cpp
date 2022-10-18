#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin >> str;

	map<char, int> l;
	for (auto x : str)
		l[x]++;
	
	int qnt_immp = 0;
	bool s = true;
	
	for (auto x : l)
	{
		if (x.second % 2 != 0)
			qnt_immp++;

		if (qnt_immp > 1)
		{
			cout << "NO SOLUTION\n";
			s = false;
			break;
		}
	}

	if (s)
	{
		vector<string> p(str.size());
		int a = 0, b = p.size()-1;
		char c = ' ';

		for (auto x : l)
		{
			if (x.second >= 2)
			{
				while (x.second >= 2)
				{
					p[a] = p[b] = x.first;
					x.second -= 2;
					a++;
					b--;				
				}
			}

			if (x.second % 2 != 0)
				c = x.first;
		}

		if (c != ' ')
			p[a] = c;

		for (auto x : p)
			cout << x;
	}
       
	return 0;
}
