#include <iostream>
using namespace std;

int main(){
  
  long int i, j, k, counter = 0;

  cin >> i >> j;
        
  for(k = 1; k <= i; k++){
    
    if(j%k == 0 && j/k <= i) counter++;  
  }

  cout << counter << endl;
  return 0;
}
