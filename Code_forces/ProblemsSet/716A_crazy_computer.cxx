#include <bits/stdc++.h>
using namespace std;

int main() {

  long int n, d, v = 0, v_aux = 0, c = 0;

  cin >> n >> d;

  while(n--) {
    cin >> v;

    if(v > v_aux && (v - v_aux <= d)) { c++; }
    else { c = 1; }

    v_aux = v;
  }
  
  cout << c << endl;
  
  return 0;
}
