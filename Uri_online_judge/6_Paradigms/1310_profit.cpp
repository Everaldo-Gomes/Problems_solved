#include <bits/stdc++.h>
using namespace std;

int main ()
{   
    int n;

    while (cin >> n)
    {
        int g;
        cin >> g;

        vector<int> num(n);

        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            num[i] = v - g;
        }            

    	int best = 0, sum = 0;
        for (int k = 0; k < n; k++) 
        {
            sum = max(num[k],sum+num[k]);
            best = max(best,sum);
        }

        cout << best << "\n";
    }
	
    return 0;
}
