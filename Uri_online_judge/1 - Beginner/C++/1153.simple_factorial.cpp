#include <iostream>
using namespace std;

int fac(int);

int main () {

  int n, ans = 0;
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    int aux = fac(i);
    cout << aux << endl;
    if(ans < aux) ans = aux;   
  }
  
  cout << ans << endl;
  return 0;
}

int fac(int n) {
  if(n < 2) return n;
  else { return n * fac(n-1); }
}
