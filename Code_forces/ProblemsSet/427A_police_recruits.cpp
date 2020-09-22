#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, crime = 0, police = 0;
  cin >> n;

  vector<int> events(n);
  
  for(int i = 0; i < n; i++) {
    int e;
    cin >> e;
    events[i] = e;
    
    if(events[i] < 0 && police == 0) {
      crime++;
    }
    else if(events[i] < -1 && police > 0) {
      crime--;
      police--;
    }
    else {
      police += events[i];
    }
  }
  
  cout << crime << endl;
  
  return 0;
}
