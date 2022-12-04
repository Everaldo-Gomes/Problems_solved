#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    
    ll n;
    cin >> n;

    while (n--)
    {
        ll r = 0;

        ll qnt_pres, max_peso;
        cin >> qnt_pres >> max_peso;

        vector<ll> presentes(qnt_pres);
        ll soma = 0;

        for (size_t i = 0; i < qnt_pres; i++)
        {
            ll v;
            cin >> v;  

            soma += v;  

            if (soma == max_peso)
            {
                r++;
                soma = 0;
            }
            else if (soma > max_peso)
            {
                r++;
                soma = v;
            }

        }
    
        if (soma > 0)
        r++;

        cout << r << "\n";
    }

    return 0;
}
