#include <bits/stdc++.h>
#include <sstream>
using namespace std;

bool isPalindrome(int x) {

  //convert to string
  stringstream str;
  str << x;

  string number_str;
  str >> number_str;

  string aux;   
  for(int i = number_str.size()-1; i >= 0; i--) { aux += number_str[i]; }

  //convert to int
  stringstream r(aux);
  int rev;
  r >> rev;
  
  if(rev == x && rev < 2147483647) { rev = 1; }
  else { rev = 0; }
  return rev;
}
using namespace std;

int main() {

  cout << isPalindrome(2147483646) << endl;
  
  return 0;
}

