#include <bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start);

int main() {
  
  int n = 10;
  int start = 5;
  
  cout << xorOperation(n, start) << endl;

  return 0;
}

int xorOperation(int n, int start) {
  vector<int> values(n);
  
  for(int i = 0; i < n; i++) { values[i] = start + 2 * i; }

  int ans = values[0];

  for(int i = 1; i < n; i++) { ans = ans ^ values[i] ; }
  
  return ans;
}
