#include <bits/stdc++.h>
using namespace std;

int main () {

  int n;
  cin >> n;

  while (n --> 0) {
    long int a, b, ans = 0;
    cin >> a >> b;
    
    if (a % b == 0) { ans = 0; }
    else { ans = (a % b) - b; }

    if(ans < 0) { ans *= -1; }
    
    cout << ans << endl;
  }
  
  return 0;
}
