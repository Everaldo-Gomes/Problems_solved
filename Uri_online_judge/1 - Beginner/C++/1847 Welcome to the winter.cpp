#include <iostream>
using namespace std;

string Happy() { return ":)"; }
string Sad()   { return ":("; }

int main()
{
    int D1, D2, D3;
	string feeling;
	
    cin >> D1 >> D2 >> D3;

	if (D1 > D2)
	{
        if (D2 <= D3)
		{
			feeling = Happy();
		}            
        else
		{
			feeling = (D3-D2) > (D2-D1) ? Happy() : Sad();
		}
    }

    else if (D1 < D2)
    {
        if (D2 >= D3)
		{
            feeling = Sad();
		}
        else
		{
			feeling = (D3-D2) < (D2-D1) ? Sad() : Happy();
		}
    }
    else
	{
		feeling =  D3 > D2 ? Happy() : Sad();
	}

	cout << feeling << endl;
	
    return 0;
}
