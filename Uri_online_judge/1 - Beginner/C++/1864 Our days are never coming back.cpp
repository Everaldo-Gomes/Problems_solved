#include <iostream>
using namespace std;

int main()
{
    int Qnt;
    char Word[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    cin >> Qnt;
	
    for(int i = 0; i < Qnt; i++)
    {
        cout << Word[i];
    }

	cout << endl;

    return 0;
}
