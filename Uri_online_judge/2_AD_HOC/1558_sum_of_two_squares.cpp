#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    vector<ll> quadrados(10002);

    for (size_t i = 0; i <= 10001; i++)
        quadrados[i] = pow(i,2);

    ll n;

    while (cin >> n)
    {
        ll k = -1;

        for (size_t i = 0; i <= 10001; i++)
        {
            if (quadrados[i] >= n)
            {
                k = i;
                break;
            }
        }

        k = k == -1 ? n : k;

        bool Para_Loop = false;
        bool Encontrou = false;

        for (ll I = k; I >= 0; I--)
        {   
            for(ll J = k; J>=0; J--)
            {
                
                if (quadrados[I]+quadrados[J] == n)
                {
                    Para_Loop = true;
                    Encontrou = true;
                    break;
                }
            }

            if(Para_Loop)
               break; 
        }

        if(Encontrou)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
