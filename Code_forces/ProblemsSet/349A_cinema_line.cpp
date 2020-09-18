#include <bits/stdc++.h>
using namespace std;

int main() {

  bool ans = true;
  int n, t = 0, f = 0, h = 0; //twenty, fifity , humdred
  cin >> n;

  vector<int> p(n);

  for(int i = 0; i < n; i++) {
    int v;
    cin >> v;
    p[i] = v;

    //if the first isn't 25 i'll not have change for anyone else
    //of if during the sell clerk runs out of change
    if(p[0] != 25 || (t < 0 && i > 0)) {
      ans = false;
      break;
    }
    else if(p[i] == 25) {
      t++;
    }
    else if(p[i] == 50 && t > 0) {
      t--; 
      f++;
    }
    else if(p[i] == 50 && t <= 0) {
      ans = false; 
      break;
    }
    else if(p[i] == 100 && (t >= 1 && f >= 1)) {
      t--;  
      f--;
      h++;
    }
    else if(p[i] == 100 && (t >= 3 || f <= 0)) {
      t -= 3; 
      h++;
    }
    else {
      ans = false; 
      break;
    }
  }
  
  if(t >= 0 && ans) { cout << "YES" << endl; }
  else { cout << "NO" << endl; }
  return 0;
}
