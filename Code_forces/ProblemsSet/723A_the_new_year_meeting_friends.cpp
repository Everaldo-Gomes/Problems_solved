#include <bits/stdc++.h>
using namespace std;

int main() {
        
  int x, y, z, ma, middle, mi;
  cin >> x >> y >> z;

  //maximum value
  ma = max(x,max(y,z));
    
  //middle value
  if((x < y && y < z) || (z < y && y < x)) { middle = y; }
  else if((y < x && x < z) || (z < x && x < y)) { middle = x; }
  else { middle = z; }
    
  //mininum value
  mi = min(x,min(y,z));

  cout << (ma-middle) + (middle-mi) << endl;
    
  return 0;
}
