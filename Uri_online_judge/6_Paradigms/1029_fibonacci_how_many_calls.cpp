#include <bits/stdc++.h>
using namespace std;

int cont = -1;

int fib(int n)
{
    cont++;
	
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        int a = fib(x);
        
        cout << "fib(" << x << ") = " << cont << " calls = " << a << "\n";
        cont = -1;
    }
    
    return 0;
}
