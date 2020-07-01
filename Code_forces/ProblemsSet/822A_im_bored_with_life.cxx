#include <bits/stdc++.h>
using namespace std;

#define type_ long long unsigned int

type_ fac(type_);

int main() {

  type_ a, b, fac_m = 0;
  cin >> a >> b;
  
  type_ m = min(a, b);
  
  //factorial will be the min(a,b)

  for(type_ i = 1; i <= m; i++) {
    type_ aux = fac(i);
    if(fac_m < aux) fac_m = aux;
  }

  cout << fac_m << endl;
  return 0;
}

type_ fac(type_ n) {
  if(n < 2) return n;
  else { return n * fac(n-1); }
}
