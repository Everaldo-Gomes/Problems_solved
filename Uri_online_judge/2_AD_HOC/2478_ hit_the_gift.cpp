#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
    ll n;
    cin >> n;

    map<string, vector<string>> lista;
    vector<string> nomes;
    
    while (n--)
    {
        string nome, p1 , p2, p3;
        cin >> nome >> p1 >> p2 >> p3;

        lista[nome].push_back(p1);
        lista[nome].push_back(p3);
        lista[nome].push_back(p2);

        nomes.push_back(nome);
    }
    
        string nome, p;

        while (cin >> nome >> p)
        {
            bool t = false;

            if (lista.count(nome))
            {
                if (lista[nome][0] == p || lista[nome][1] == p || p == lista[nome][2]) 
                    t = true;
            }
            
            if (t)
                cout << "Uhul! Seu amigo secreto vai adorar o/\n";
            else   
                cout << "Tente Novamente!\n";
        }
        
    return 0;
}
