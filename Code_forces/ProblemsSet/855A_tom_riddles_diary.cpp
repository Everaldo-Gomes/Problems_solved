#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<string> names(n);
  
  for(int i = 0; i < n; i++) {    
    string get_name;
    cin >> get_name;
    names[i] = get_name;
  }


  for(int i = 0; i < n; i++) {
    bool next = false;
    
    for(int j = 0; j < i; j++) {
      if(names[i] == names[j]) {
	cout << "YES" << endl;
	next = true;
	break;
      }
    }

    if(!next) { cout << "NO" << endl; }
  }
  
  
  return 0;
}
