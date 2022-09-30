#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	string nota;
	
	if (n == 0)
		nota = 'E';
	else if (n >= 1 && n <= 35)
		nota = 'D';
	else if (n >= 36 && n <= 60)
		nota = 'C';
	else if (n >= 61 && n <= 85)
		nota = 'B';
	else 
		nota = 'A';
	
	cout << nota << "\n";
	
	return 0;
}
