#include <bits/stdc++.h>
using namespace std;

int main() {
    
  int n;
  cin >> n;
  n--; //the one witch is missing

  vector<int> v(n);
    
  for(int i = 0; i < n; i++) { cin >> v[i]; }
    
  sort(v.begin(), v.end());

  if(v[0] != 1) { cout << 1 << endl; }
  else if(v[v.size()-1] != n+1) { cout << n+1 << endl; }
  else {
    for(int i = 1; i < n; i++) {
      if(v[i] - v[i-1] != 1) {
	cout << v[i]-1 << endl;
	break;
      }
    }
  }

  return 0;
}
