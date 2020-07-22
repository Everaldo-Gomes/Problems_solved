#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m_;
  cin >> n >> m_;

  bool c = false, m = false, y = false, w = false, g = false, b = false;
  
  vector<string> v(n, string(m_,'X'));
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m_; j++) {
      cin >> v[i][j];
      if(v[i][j] == 'C') c = true;
      else if(v[i][j] == 'M') m = true;
      else if(v[i][j] == 'Y') y = true;
      else if(v[i][j] == 'W') w = true;
      else if(v[i][j] == 'G') g = true;
      else if(v[i][j] == 'B') b = true;     
    }
  }

  
  if( ((w && b && g) || (w || b || g)) &&
     (!c && !m && !y)) {  cout << "#Black&White" << endl; }
  else { cout << "#Color" << endl; }
  return 0;
}
