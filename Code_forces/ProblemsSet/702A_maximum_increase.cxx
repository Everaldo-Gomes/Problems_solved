#include <bits/stdc++.h>
using namespace std;

int main() {

  long int n, v = 0, v_aux = 0, c = 0, c_aux = 0;
  cin >> n;

  while(n--) {
    cin >> v;
    
    if(v > v_aux) { c++; }
    else {
      if(c_aux < c) { c_aux = c;  }
      c = 1;
    }
    v_aux = v;
  }

  if(c >= c_aux) cout << c << endl;
  else cout << c_aux << endl;

  return 0;
}
