#include <bits/stdc++.h>
using namespace std;

int main() {

  int h, w, rock_weigh1, rock_dist1, rock_weigh2, rock_dist2;
  cin >> w >> h >> rock_weigh1 >> rock_dist1 >> rock_weigh2  >> rock_dist2;
  
  for(int height = h; height >= 0; height--) {
    w += height;
    
    if(height == rock_dist1) {
      w -= rock_weigh1;
      if(w <= 0) { w = 0; }
    }
    if(height == rock_dist2) {
      w -= rock_weigh2;
      if(w <= 0) { w = 0; }
    }
  }

  if(w <= 0) { w = 0; }
  cout << w << endl;
  
  return 0;
}
