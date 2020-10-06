#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, p = 0, repeated = 0;
    cin >> n;
 
    vector<int> v(n);
  
    for(int i = 0; i < n; i++) {
      int aux;
      cin >> aux;
      v[i] = aux;
    }
 
    sort(v.begin(), v.end());
 
    if(v[0] == v[1]) { p += 2; }
    else { p++; }
 
    for(int i = 2; i < n; i++) {
    
      if(v[i-1] == v[i]) { p += 1; }
      else {
	if(repeated < p) { repeated = p; }
	p = 1;
      }
    }
 
    if(repeated == 0 && p == 1) repeated = 1;
    else if(repeated == 0 || repeated < p) repeated = p; 
    
    cout << repeated << endl;
 
  return 0;
}
