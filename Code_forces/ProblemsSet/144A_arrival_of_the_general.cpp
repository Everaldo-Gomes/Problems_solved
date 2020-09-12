#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, ma = 0, mi = 1E7, pmi = 0, pma = 0, times = 0;
    cin >> n;

    vector<int> v(n);
    
    for(unsigned int i = 0; i < v.size(); i++) {
      cin >> v[i];

      //get the maximum value close to the beginning
      if(v[i] > ma) { ma = v[i]; pma = i; }

      //get the minimum value close to the end
      if(v[i] <= mi) { mi = v[i]; pmi = i; }
    }
  
    bool changed = false;
    if(v[0] != ma) {
      for(unsigned int i = pma; i >= 1; i--) {
	if(v[i-1] == mi && !changed && i >= pmi) { pmi++; changed = true; }
	swap(v[i],v[i-1]);
	times++;
      }
    }
      
    if(v[v.size()-1] != mi) {
      for(unsigned int i = pmi; i < v.size()-1; i++) {
	swap(v[i],v[i+1]);
	times++;
      }
    }

    cout << times << endl;
    
  return 0;
}
