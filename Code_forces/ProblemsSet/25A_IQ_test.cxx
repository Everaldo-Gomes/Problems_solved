#include <bits/stdc++.h>
using namespace std;

int main() {
    
  int n, ans = 0, odd = 0, even = 0;
  cin >> n;

  vector<int> v(n);
  
  for(int i = 0; i < n; i++) {
    int aux;
    cin >> aux;

    if(aux % 2 == 0) { v[i] = 2; even++; }
    else { v[i] = 1; odd++; }
  }
  
  if(even > odd) {
    for(int i = 0; i < n; i++) {
      if(v[i] == 1) { //1 is treated like odd
	ans = i+1;
	break;
      }
    }  
  }
  else {
    for(int i = 0; i < n; i++) {
      if(v[i] == 2) { //2 is treated like even
	ans = i+1;
	break;
      }
    }
  }
  
  cout << ans << endl;

  return 0;
}
