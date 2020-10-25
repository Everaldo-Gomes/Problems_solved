#include <iostream>
using namespace std;

int main () {

  int n, line = 0, i = 1;
  cin >> n;

  while(1) {
    cout << i << " " << i*i << " " << i*i*i << "\n";

    line++; i++;

    if(line == n) break;
  }
  
  return 0;
}
