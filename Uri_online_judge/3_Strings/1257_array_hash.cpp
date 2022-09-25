#include <bits/stdc++.h>
using namespace std;

map<char, int> alphabet;

int get_index(char c)
{
	return alphabet[c];
}

int main ()
{
	int val = 0;
	
	for (char k = 'A'; k <= 'Z'; k++, val++)
	{
		alphabet[k] = val;
	}
	
	int n;
	cin >> n;
	
	while (n--)
	{
		int l;
		cin >> l;

		int total = 0;
		
		for (int i = 0; i < l; i++)
		{
			string str;
			cin >> str;

			for (int j = 0; j < str.size(); j++)
			{
				total += get_index(str[j]); // index in the alphabet
				total += i;                 // current line
				total += j;                 // position in the current string
			}
		}
		
		cout << total << "\n";
	}
	
	return 0;
}
