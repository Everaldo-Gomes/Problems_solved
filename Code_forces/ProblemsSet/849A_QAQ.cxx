#include <bits/stdc++.h>
using namespace std;

int main () {

  int count = 0;
  
  string str;
  cin >> str;
  
  for(unsigned int i = 0; i < str.size(); i++) {
    if(str[i] == 'Q'){

      for(unsigned int j = i; j < str.size(); j++) {
	if(str[j] == 'A') {

	  for(unsigned int k = j; k < str.size(); k++) {
	    if(str[k] == 'Q') { count++; }
	  }}}}}
  
  cout << count << endl;
  return 0;
}

