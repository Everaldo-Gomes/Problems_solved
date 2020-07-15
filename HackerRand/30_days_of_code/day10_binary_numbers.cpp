#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int ans = 0, aux = 0;
    
    while(n > 0) {
        if(n % 2 != 0) { aux++; }
        else { 
            if(ans < aux) { ans = aux; }
            aux = 0; 
        }    
        n /= 2;
    }
    if(ans < aux) { ans = aux; } //if the first number were all 1
    cout << ans << endl;
    return 0;
}
