#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int subtractProductAndSum(int n) {

  //convert int to string
  stringstream get_str;
  get_str << n;

  string str;
  get_str >> str;

  int product = 1, sum = 0, result;
  
  for(int i = 0; i < str.size(); i++) {

    //convert each value to int
    string aux_str;
    aux_str = str[i];

    stringstream v(aux_str);

    int aux_int;
    v >> aux_int;

    sum += aux_int;
    product *= aux_int;
  }
  
  return product - sum;
}

int main() {

  cout << subtractProductAndSum(4421) << endl;
  
  return 0;
}

