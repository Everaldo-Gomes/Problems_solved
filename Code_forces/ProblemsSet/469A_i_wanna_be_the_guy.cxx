#include <iostream>
#include <vector>
using namespace std;

int main() {

  
  int n, p, q, l = 0;
  cin >> n;

  vector<int> x(100), y(100);

  cin >> p; for(int i = 0; i < p; i++) { cin >> x[i]; }
  cin >> q; for(int i = 0; i < q; i++) { cin >> y[i]; }

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < (p+q); j++) {
      if(x[j] == i || y[j] == i) {
	l++;
	break;
      }
    }
  }
  
  if(l == n)
      cout << "I become the guy." << endl;
  else cout << "Oh, my keyboard!" << endl;
  
  return 0;
}
