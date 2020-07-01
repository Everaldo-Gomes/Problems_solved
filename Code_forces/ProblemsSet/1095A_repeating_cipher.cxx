#include <bits/stdc++.h>
using namespace std;

int main () {

  int s, j = 1, repeated = 1;
  cin >> s;
  
  string str, ans;
  cin >> str;
  
  ans[0] = str[0]; //first position does not change
  
  for(unsigned int i = 1; i < str.size(); ) {
    repeated++;
    ans[j] = str[i];
    j++;
    i += repeated;      
  }
 
  for(int i = 0; i < j; i++) { cout << ans[i]; }
  cout << endl;
  
  return 0;
}
