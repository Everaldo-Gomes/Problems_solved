#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Qnt, Power;
    char Name[10];

    cin >> Qnt;

    for(int i = 0; i < Qnt; i++)
    {
        cin >> Name >> Power;

        if(Name[0] == 'T' && Name[1] == 'h' && Name[2] == 'o' && Name[3] == 'r')
		{
			cout << "Y\n";
		}
		
        else
		{
			cout << "N\n";		
		}
	}

    return 0;
}
