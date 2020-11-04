#include <iostream>
using namespace std;

int main () {

  int x, z, sum = 0, count = 0;
  cin >> x >> z;

  if(z <= x) {
    while(z <= x) cin >> z;
  }

  while(sum < z) {

    if(sum <= z) {
      count++;
      sum += x;
      x++;
    }
  }

  cout << count << endl;
  
  return 0;
}
