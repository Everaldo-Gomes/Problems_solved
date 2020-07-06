#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s); 
       
int main() {

  vector<char> v = {'E','v','e','r','a','l','d','o'};

  reverseString(v);

  cout << endl;
  return 0;
}

void reverseString(vector<char>& s) {
  
  for(int i = 0, j = s.size()-1; i < s.size(), j >= 0; i++, j--) {

    if(i > j) break;
    else {
      char aux = s[i];
      s[i] = s[j];
      s[j] = aux;
    }
  }

  for(int i = 0; i < s.size(); i++) { cout << s[i]; } //not part of the result, just to see if it was right
}
