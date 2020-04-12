#include <iostream>
using namespace std;

int main(){

  string s, t;
  cin >> s >> t;

  int s_size = s.size();
  int t_size = t.size();

  bool equal = true;

  for(int i = 0, j = t_size-1; i < s_size, j >= 0;  i++, j--){
    if(s[i] != t[j]){
      equal = false;
      break;
    }
  }

  if(equal) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
