#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main ()
{
	short int m = 0, n = 0;

	while (cin >> m >> n)
	{
		short int repeated = -1;

		for (int i = m; i <= n; i++)
		{
			bool stop = false;
			
			stringstream s;
			s << i;

			string aux_str;
			s >> aux_str;
			
			for (int j = 0; j < aux_str.size(); j++)
			{
				for (int k = j+1; k < aux_str.size(); k++)
				{
					if (aux_str[j] == aux_str[k])
					{
						repeated++;
						stop = true;
						break;
					}
				}

				if (stop)
				{
					break;
				}
			}
		}

		int ans = (n - m) - repeated;
		ans = ans <= 0 ? 0 : ans;
		
		cout << ans << endl;
	}
}
