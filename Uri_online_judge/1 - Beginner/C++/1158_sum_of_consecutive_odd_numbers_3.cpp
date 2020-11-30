#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  while(n--) {
    int a, b, sum = 0;
    cin >> a >> b;

    while(1) {
      
      if(a % 2 != 0) {
	sum += a; b--;
      }

      if(b == 0) break;
      a++;
    }
    cout << sum << endl;
  }


  return 0;
}
