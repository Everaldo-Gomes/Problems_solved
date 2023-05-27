#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
    ll n, m;

    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        bool t = false;

        vector<vector<int>> matriz (m, vector<int>(n, 0));

        for (int i = 0; i < m; i++)
        {   
            for (int j = 0; j < n; j++)
            {   
                int v;
                cin >> v;
                matriz[i][j] = v;
            }
        }

        for (int i = 0; i < n; i++)
        {   
            int s = 0;

            for (int j = 0; j < m; j++)
              s += matriz[j][i];   
            
            if (s == m)
            {
                t = true;
                break;
            }
        }    


        if (t)
          cout << "yes\n";  
        else 
          cout << "no\n";
    }


    return 0;
}
