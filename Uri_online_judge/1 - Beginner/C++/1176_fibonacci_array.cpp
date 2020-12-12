#include <bits/stdc++.h>
using namespace std;

long long int fib(int v) {

  if(v == 0) return 0;
  
  long long int f1 = 1, f2 = 1, sum = 0;
  
  for(int i = 3; i <= v; i++) {
    sum = f1 + f2;
    f1 = f2;
    f2 = sum;
  }
  return f2;
}

int main() {

  int n;
  cin >> n;

  while(n--) {
    int v;
    cin >> v;

    cout << "Fib(" << v << ") = " << fib(v) << endl;
  }
  
  return 0;
}

