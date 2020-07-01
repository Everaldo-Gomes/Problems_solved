#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;
  cin >> str;

  vector<int> v(str.size());
  int sum = 0, n = 0; 

  while(1) {
    
    //getting the sum of all digits
    for(unsigned int i = 0; i < str.size(); i++) {
      string aux;
      aux = str[i];
      stringstream conv(aux);
      conv >> v[i];
      sum += v[i];
    }

    //getting the whole number
    string aux1;
    aux1 = str;
    stringstream whole_number(aux1);
    whole_number >> n;
    
    if(sum % 4 == 0) { cout << n << endl; break; }
    else {
      n += 1;
      
      //converting back to string
      stringstream to_string;
      to_string << n;
      to_string >> str;
    }
    v.clear(); sum = 0;
  }
  return 0;
}
