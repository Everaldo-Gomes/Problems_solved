#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, c;
  cin >> r >> c;

  vector<string> str(r, string(c,0));
  int max_len = 0, min_len = 1E7;
  int max_hig = 0, min_hig = 1E7;
    
  //getting letter
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> str[i][j];

      //defining limits
      if(str[i][j] == '*') {
	if(j > max_len) { max_len = j; }
	if(j < min_len) { min_len = j; }
	if(i > max_hig) { max_hig = i; }
	if(i < min_hig) { min_hig = i; }
      }
    }
  }

  //show
  for(int i = min_hig; i <= max_hig; i++) {
    for(int j = min_len; j <= max_len; j++) {
      cout << str[i][j];
    }
    cout << "\n";
  }
  
  return 0;
}
