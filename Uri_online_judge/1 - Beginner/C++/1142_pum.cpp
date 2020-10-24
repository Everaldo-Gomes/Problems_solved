#include <iostream>
using namespace std;

int main () {

  int n, qnt = 0, line = 0, i = 1;
  cin >> n;
  
  while(1) {

    cout << i << " ";
    qnt++;

    if(qnt == 3) {
      cout << "PUM" << endl;
      qnt = 0;
      line++;
      i++;
    }
    
    if(line == n) break;
    i++;
  }
  
  return 0;
}
