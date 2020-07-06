#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address);

int main() {

  string ip = "255.100.50.0";
  
  cout << defangIPaddr(ip) << endl;

  return 0;
}

string defangIPaddr(string address) {

  string defanged = "";

  for(unsigned int i = 0; i < address.size(); i++) {
    if(address[i] == '.') { defanged += "[.]"; }
    else { defanged += address[i]; }
  }
  
  return defanged;
}

