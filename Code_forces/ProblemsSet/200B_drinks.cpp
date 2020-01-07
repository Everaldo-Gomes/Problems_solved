#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int n, volume;
  long double ans = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> volume;
    ans += volume;
  }

  cout << fixed << setprecision(14) << (ans/n) << endl;
  return 0;
}
