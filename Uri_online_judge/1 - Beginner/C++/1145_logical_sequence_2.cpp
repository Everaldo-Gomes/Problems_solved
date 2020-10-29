#include <iostream>
using namespace std;

int main () {

  int n, m, i = 1, qnt = 0, line = 0;
  cin >> n >> m;

  if(n > m) swap(n,m);

  while(1) {
    
    cout << i; qnt++;

    if(qnt == n) {
      qnt = 0; line++;
      cout << "\n";
    }
    else cout << " ";
    
    if(i == m) break;
    i++; 
  }
  
  return 0;
}
