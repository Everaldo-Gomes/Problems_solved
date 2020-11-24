#include <iostream>
#include <iomanip>
using namespace std;

int main () {

  double result = 1;

  for(double i = 2; i <= 100; i++) { result += 1/i; }
  
  cout << fixed << setprecision(2) << result << endl;
  
  return 0;
}
