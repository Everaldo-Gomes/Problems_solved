#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, count = 1, lvl = 0;
  cin >> n;

  if(n > 3) {
    int cubes = n;
    for(int i = 2; i <= n; i++) {
      count += i;
      lvl = i;
      if(cubes-count <= 0) { break; }
      else cubes -= count;
    }
  }

  lvl--;
  if(lvl <= 0) { lvl = 1; }
  cout << lvl << endl;
    
  return 0;
}
