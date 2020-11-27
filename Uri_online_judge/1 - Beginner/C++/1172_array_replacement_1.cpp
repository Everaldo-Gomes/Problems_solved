#include <iostream>
using namespace std;

int main() {
  
  for(int i = 0; i < 10; i++) {

    int aux;
    cin >> aux;

    if(aux <= 0) aux = 1;
    
    cout << "X[" << i << "] = " << aux << endl;
  }
  
  return 0;
}
