#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  while(q--) {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(r2 == r1) r2--; //the numbers must be distincts and be in the range
    cout << r1 << " " << r2 << endl;
  }
  
  return 0;
}
