#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll n, r = 0;
    cin >> n;
    
    vector<string> s;
    s.push_back("FACE");
    ll k = 1;

    for(size_t i = 1; i <= n; i++)
    {
        string a, b, c, d;
        cin >> a >> b >> c >> d;

        string letra = d+c+b+a;
        

        if (letra == s[k-1])
        {
         
            if (s.size() != 1)
            {
         
                s.pop_back();
                k-=1;
            }

            r++;
        }
        else 
        {
            s.push_back(a+b+c+d);
            k++;
        }
    }
   
    cout << r << "\n";
    return 0;
}
