#include <iostream>
#include <vector>
using namespace std;

int main(){

  long unsigned int n, m, i, j, t, q, r; 

  cin >> n >> m;

  vector<string> str1, str2;
  str1.resize(n);
  str2.resize(m);
  
  for(i = 0; i < n; i++) cin >> str1[i];
  for(i = 0; i < m; i++) cin >> str2[i];
  
  cin >> t;

  for(i = 0; i < t; i++){
    cin >> q;
    q--;
    r = q;
    
    while(q >= n) q %= n;
    cout << str1.at(q);
    
    while(r >= m) r %= m;
    cout << str2.at(r);
    
    cout << "\n";
  }
  return 0;
}
