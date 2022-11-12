#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
 
int main ()
{
    ll n;
    cin >> n;
    
    vector<ll> num(n);
 
    for (int i = 0; i < n; i++)
        cin >> num[i];
 
    sort(num.begin(), num.end());
    
    ll r = 1; 
  
    for (int i = 0; i < n && num[i] <= r; i++)
       r += num[i];
 
    cout << r << "\n";
    return 0;
}
