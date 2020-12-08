#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int a[101];
  double n;


  for(int i = 0; i < 100; i++){
    cin >> n;
    
    if(n <= 10) {
      cout << "A[" << i << "] = " << fixed << setprecision(1) << n << endl;
    }
  }
  
  return 0;
}
