#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    long long int n, r = 0;
    cin >> n;
 
    vector<long long int> vec(n);
 
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    for (int i = 1; i < n; i++)
    {
        if (vec[i-1] > vec[i])
        {
            long long int a = abs(vec[i-1] - vec[i]);
            vec[i] += a;            
            r +=  a != 0 ? a : 0;
        }
    }
 
    cout << r << "\n";
    return 0;
}
