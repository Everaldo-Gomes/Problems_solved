#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
  string aux = s;

  for(unsigned int i = 0; i < s.size(); i++) {
    s[indices[i]] = aux[i];
  }

  return s;
}


int main() {

  string s = "hrjwudpqoxrwrpzcm";
  vector<int> v = {13,7,3,2,16,12,11,15,8,10,5,1,0,9,6,4,14};

  s = restoreString(s,v);

  for(unsigned int i = 0; i < s.size(); i++) { cout << s[i]; }
  
  cout << endl;
  return 0;
}
