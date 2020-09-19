#include <bits/stdc++.h>
using namespace std;

int main() {
      
    int n, fir = 0, sec = 0, pf = 0;
    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
      cin >> v[i];

      //greatest number and its position
      if(fir < v[i]) { fir = v[i]; pf = i+1; }
    }

    //second greatest number and its position
    for(int i = 0; i < n; i++) {
      if(sec < v[i] && v[i] != fir) { sec = v[i]; }
    }

    cout << pf << " " << sec << endl;
  
  return 0;
}
