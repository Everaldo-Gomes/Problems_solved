#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, ans = 0;
  cin >> n >> m;

  vector<int> np;
  int k = 0;
  
  //get negative prices
  for(int i = 0; i < n; i++) {
    int v;
    cin >> v;

    if(v <= 0) {
      np.resize(np.size() + 1);
      np[k] = v;
      k++;
    }
  }

  sort(np.begin(), np.end());
  
  //buy tvs with negative values
  if(np.size() > 0) {
    for(unsigned int i = 0; i < np.size(); i++) {
      ans += np[i];
      m--;
      if(m == 0) { break; }
    }
  }  

  cout << abs(ans) << endl;
  
  return 0;
}
