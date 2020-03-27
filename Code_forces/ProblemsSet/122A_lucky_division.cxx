#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  bool lucky = false;
  
  //"Petya calls a number almost lucky if it could be evenly divided by SOME LUCKY number."
  //every number <= 1000 that has 4 and/or 7
  vector<int> v = {4, 7, 44, 47, 74, 77, 444, 474, 477, 744, 747, 774, 777};
  
  for(int pv : v) {
    if(n % pv == 0) {
      lucky = true;
      break;
    }
  }
    
  if(lucky) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
