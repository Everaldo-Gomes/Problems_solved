#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<char> vec;
	for (auto x : str)
		vec.push_back(x);

	sort(vec.begin(), vec.end());
	
	vector<vector<char>> r;
	int i = 0;
	
	do
	{
		r.resize(r.size()+1);
		
		for (auto x : vec)
			r[i].push_back(x);

		i++;
	    
	} while (next_permutation(vec.begin(), vec.end()));

	
	cout << i << "\n";

	for (unsigned int k = 0; k < r.size(); k++)
	{
		for (auto x : r[k])
			cout << x;

		cout << "\n";
	}
	
	return 0;
}
