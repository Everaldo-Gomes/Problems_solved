#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int n_num;
		vector<int> num;

		cin >> n_num;

		for(int i = 0; i < n_num; i++)
		{
			int x;
			cin >> x;
			num.push_back(x);
		}

		int index = 0;
		for (int i = 1; i < num.size(); i++)
		{
			if (num[index] != num[i])
			{
				if (i < num.size()-1 && num[i+1] == num[i])
					index = i;
				else
					index = i+1;

				break;
			}
		}
	    
		cout << index << "\n";
	}
	
	return 0;
}
