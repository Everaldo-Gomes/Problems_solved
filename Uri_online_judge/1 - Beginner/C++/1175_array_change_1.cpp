#include <bits/stdc++.h>
using namespace std;

int main() {

  int n = 20;
  vector<int> v(n,0);
  int s = v.size()-1;
  
  
  while(n--) {
    cin >> v[s];
    s--;
  }

  for(unsigned int i = 0; i < v.size(); i++) {
    cout << "N[" << i << "] = " << v[i] << endl;
  }
  
  return 0;
}
