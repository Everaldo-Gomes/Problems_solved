#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  while(n--) {
    int p, i;
    cin >> p;

    for(i = 2; i < p; i++) {
      if(p % i == 0) {
	cout << p << " nao eh primo" << endl;
	break;
      }
    }
    if(p == i) { cout << p << " eh primo" << endl; }
  }
  
  return 0;
}
