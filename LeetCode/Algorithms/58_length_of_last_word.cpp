#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
  int result = 0;
  bool avoid = true;

  int i = s.size();

  while(i--) {
    if(s[i] == ' ' && !avoid) break;
    if(s[i] == ' ' && avoid) continue;
    else {
      result++;
      avoid = false;
    }
  }

  return result;
}

int main() {

  cout << lengthOfLastWord(" gomsdf") << endl;
  
  return 0;
}
