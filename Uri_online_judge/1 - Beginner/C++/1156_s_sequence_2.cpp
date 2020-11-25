#include <iostream>
#include <iomanip>
using namespace std;

int main () {

  double result = 1, n = 3;
  
  for(double i = 2; ;) {
    result += n/i;
    n += 2; i *= 2;
    if(n == 39) break;
  }
  
  cout << fixed << setprecision(2) << result << endl;
  
  return 0;
}
