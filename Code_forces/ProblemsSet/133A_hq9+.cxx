#include <iostream>
using namespace std;

int main() {

  bool equal = false;
  string v = {'H','Q','9','+'}, s;

  cin >> s;
  
  for(int i = 0; i < s.size(); i++) {
    for(int j = 0; j < v.size(); j++) {
      if(s[i] == v[j]) {
	equal = true;
	if(s[i] == '+' && (s[i-1] != '9' || s[i-1] != 'H' || s[i-1] != 'Q') &&
	   (s[i+1] != '9' || s[i+1] != 'H' || s[i+1] != 'Q' || s[i+1] != '+') ) {
	  equal = false;
	  break;
	}
      }
    }
    if(equal) {
      cout << "YES" << endl;
      break;
    }
  }

  if(!equal) cout << "NO" << endl;

  return 0;
}
