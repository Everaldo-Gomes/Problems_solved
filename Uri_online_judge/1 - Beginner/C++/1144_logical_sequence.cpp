#include <iostream>
using namespace std;

int main () {

  int n, i = 1, line = 0;
  cin >> n;

  while(1) {
    cout << i << " " << i*i << " " << i*i*i << endl;
    cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
    line += 2;
    
    if(line == n*2) break;
    i++;
  }
  
  return 0;
}
