#include <iostream>
using namespace std;

int main() {

  int n, a[10];
  cin >> n;
  
  for(int i = 0; i < 10; i++){
    a[i] = n;
    n *= 2;
	
    cout << "N[" << i << "] = " << a[i] << endl;
  }
  return 0;
}
