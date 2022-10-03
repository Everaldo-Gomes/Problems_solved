#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t = 0, j = 0;
	
	while (1)
	{
		string str;
		int n;

		cin >> str >> n;
		
		if (str == "SALIDA")
		{
			t += n;
			j++;
		}
		else if (str == "VUELTA")
		{
			t -= n;
			j--;
		}

		if (str == "ABEND")
			break;
	}

	cout << t << "\n"
		 << j << "\n";
	return 0;
}
