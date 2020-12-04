#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  while(n--) {
    
    int p, sum = 0;
    cin >> p;

    for(int i = 1; i < p; i++) {
      if(p % i == 0) sum += i;
    }
    if(sum == p) { cout << p << " eh perfeito" << endl;  }
    else { cout << p << " nao eh perfeito" << endl; }
  }
  
  return 0;
}
