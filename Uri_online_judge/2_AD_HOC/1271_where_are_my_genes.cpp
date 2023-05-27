#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
    int c = 1;

    while (1)
    {
        int gen_num, num_inver;
        cin >> gen_num;

        if (gen_num == 0)
          break;

        cin >> num_inver;

        vector<int> genoma (gen_num + 1);   

        for (int i = 1; i <= gen_num; i++)
          genoma[i] = i;

        for (int i = 0; i < num_inver; i++)
        {
            int a, b;
            cin >> a >> b;

            int j = a;
            int m = b;

            while (j < m)
            {
                swap(genoma[j], genoma[m]);
                j++;
                m--;
            }
        }
        
        int consulta;
        cin >> consulta;

        cout << "Genome " << c << "\n";

        for (int i = 0; i < consulta; i++)
        {
            int v;
            cin >> v;

            auto it = find(genoma.begin(), genoma.end(), v);
            if (it != genoma.end()) 
            {
                int index = it - genoma.begin();
                cout << index << "\n";
            }
        }

        c++;
    }
}
