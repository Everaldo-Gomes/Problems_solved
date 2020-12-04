#include <iostream>
using namespace std;

int main() {

  int n;
  
  while(cin >> n) {
    int  qnt = 0, sum = 0;
    if(n == 0) break;

    while(1) {
      if(n % 2 == 0) {
	sum += n; qnt++;
      }
      n++;
      if(qnt == 5) { break; }      
    }
    cout << sum << endl;
  }
  
  return 0;
}
