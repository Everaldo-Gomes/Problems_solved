#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, c, A, B, C, total = 0;
	cin >> a >> b >> c
		>> A >> B >> C;

	if (a < A)
		total += A - a;

	if (b < B)
		total += B - b;

	if (c < C)
		total += C - c;
	

	cout << total << "\n";
	
	return 0;
}
