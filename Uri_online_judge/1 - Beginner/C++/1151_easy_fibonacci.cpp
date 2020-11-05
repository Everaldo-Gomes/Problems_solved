#include <iostream>
#include <vector>
using namespace std;

int main () {

  int n;
  cin >> n;

  vector<int> v(n);

  for(int i = 0; i < n; i++) { v[i] = i; }
  
  cout << v[0] << " " << v[1] << " ";
  
  for(int i = 2; i < n; i++) {
    v[i] = v[i-1] + v[i-2];
    cout << v[i];
    if(i != n-1) cout << " ";
  }

  cout << endl;
  return 0;
}

/* recursively hasn't passed on time

  for(int i = 0; i < n; i++) {
    cout << fib(i); 
    if(i != n-1) cout << " ";
  }


int fib(int n) {
  if(n < 2) return n;
  else { return fib(n-1) + fib(n-2); }
}

*/
