#include <bits/stdc++.h>
using namespace std;

int main()
{
	short int slugs_qnt = 0;
	
	while(cin >> slugs_qnt)
	{
		vector<int> speeds(slugs_qnt);
		int s;
		
		for(int i = 0; i < slugs_qnt; i++)
		{
			cin >> s;
			speeds.push_back(s);
		}

		sort(speeds.begin(), speeds.end(), greater<int>());

		short int ans = 1; // suppose all slugs is lvl 1

		ans = (speeds[0] >= 10 && speeds[0] < 20) ? 2 : ans;
		ans = speeds[0] >= 20 ? 3 : ans;
		
		cout << ans << endl;
	}
	
	return 0;
}
