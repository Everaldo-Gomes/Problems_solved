#include <iostream>
#include <iomanip>
using namespace std;

int main () {

  int n, qnt = 0;
  double sum = 0, result = 0;

  while(cin >> n) {
    if(n < 0) break;
    qnt++;
    sum += n;
  }

  result = sum / qnt;

  cout << fixed << setprecision(2) << result  << endl;
  
  return 0;
}
