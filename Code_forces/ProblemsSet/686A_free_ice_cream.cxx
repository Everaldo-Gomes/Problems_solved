#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

  ll n, packages, qnt, child = 0;
  cin >> n >> packages;

  char sign;

  while(n--) {
    cin >> sign >> qnt;

    if(sign == '+') packages += qnt;
    else if(sign == '-' && packages >= qnt)packages -= qnt;
    else child++;
  }

  cout << packages << " " << child << endl;
  
  return 0;
}
