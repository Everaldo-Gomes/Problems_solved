#include <iostream>
using namespace std;

int main() {

  string s1, s2;
  cin >> s1 >> s2;

  for(unsigned int i = 0; i < s1.size(); i++) {
    if(s1[i] == s2[i]) s1[i] = '0';
    else {
      s1[i] = '1';
    }
  }

  for(unsigned int i = 0; i < s1.size(); i++) { cout << s1[i]; }

  cout << endl;
  return 0;
}
