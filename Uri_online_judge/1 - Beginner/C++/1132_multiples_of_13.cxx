#include <iostream>
using namespace std;

int main () {

  int a, b, sum = 0;
  cin >> a >> b;
  
  if(a > b) swap(a,b);
  
  while(a <= b) {
    if(a % 13 != 0) { sum += a; }
    a++;
  }
  cout << sum << endl;
  
  return 0;
}
