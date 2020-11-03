#include <iostream>
using namespace std;

int main () {

  int a, n, qnt = 0, sum = 0;
  cin >> a >> n;

  if(n <= 0) {
    while(n <= 0) { cin >> n; }
  }
  
  while(1) {
    sum += a;
    a++; qnt++;
    if(qnt == n) break;
  }

  cout << sum << endl;
  return 0;
}
