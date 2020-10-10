#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n --> 0) {
      long long int v, t = 0;
      cin >> v;

      if(v == 1) { cout << 0 << endl; }
      else if(v == 2) { cout << -1 << endl; }
      else {
	while(1) {

	  if(v % 6 == 0) { v /= 6; t++; }
	  else { v *= 2; t++; }

	  if(v == 1) { break; }
	  if(v >= v * 6) { t = -1; break; }
	}
	cout << t << endl;
      }
    }
    
  return 0;
}
