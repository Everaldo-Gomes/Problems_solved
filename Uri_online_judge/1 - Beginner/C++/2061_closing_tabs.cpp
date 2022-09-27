#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int num_tab, num_action, result = 0;
	cin >> num_tab >> num_action;

	while (num_action--)
	{
		string action;
		cin >> action;
		
		if (action == "fechou")
			num_tab++;
		else
			num_tab--;
	}

	cout << num_tab << "\n";
	
	return 0;
}
