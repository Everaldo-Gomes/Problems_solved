#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int reverse(int x) {
  
  //convert to string
  stringstream str;
  str << x;

  string number_str;
  str >> number_str;

  string aux;
  
  if(number_str[0] == '-') aux += "-";
  for(int i = number_str.size()-1; i >= 0; i--) { aux += number_str[i]; }
  
  //convert to int
  stringstream r(aux);
  int rev;
  r >> rev;

  if(rev >= 2147483647 || rev <= -2147483648) { rev = 0; }
  
  return rev;
}

int main() {

  cout << reverse(147483648) << endl;
  
  return 0;
}

