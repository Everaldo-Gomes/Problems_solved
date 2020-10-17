#include <iostream>
using namespace std;

int main () {

  int a, b;
  cin >> a >> b;
  
  if(a > b) swap(a,b);

  a++;
  while(a < b) {
    if(a % 5 == 2 || a % 5 == 3) cout << a << endl;
    a++;
  }
  
  return 0;
}
