#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main ()
{
    ll v, q;
    cin >> v >> q;
 
    vector<ll> num;
    while (v--)
    {
        ll x;
        cin >> x;
        num.push_back(x);
    }
 
    vector<ll> sum_num;
 
    for (ll i = 0; i < num.size(); ++i)
    {
        if (i == 0)
            sum_num.push_back(num[i]);
        else
            sum_num.push_back(sum_num[i-1] + num[i]);
    }
 
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
		
        if ((a == b && a <= 1) || a == 1)
            cout << sum_num[b-1] << "\n";
        else
            cout << sum_num[b-1] - sum_num[a-2] << "\n";
        
    }
 
    return 0;
}
