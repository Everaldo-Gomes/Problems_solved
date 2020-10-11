#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n --> 0) {
      int m;
      cin >> m;
      
      vector<int> v(m);
      
      for(int i = 0; i < m; i++) { cin >> v[i]; }
      sort(v.begin(), v.end());

      //removing similar values
      bool can = true;
      for(unsigned int i = 1; i < v.size(); i++) {
	if(v[i-1] == v[i]) {
	  v.erase(v.begin() + i);
	  i--;
	}
	else if(abs(v[i-1]-v[i]) > 1) { can = false; break; }
      }

      if(can) { cout << "YES" << endl; }
      else { cout << "NO" << endl; }
    }    
    
  return 0;
}
