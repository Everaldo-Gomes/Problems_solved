#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  getchar();

  while(n--) {
    string str;
    getline(cin, str);

    //middle to left
    for(int i = (str.size()-1)/2; i >= 0; i--) {
      cout << str[i];
    }

    //right to middle
    for(unsigned int i = str.size()-1; i >= str.size()/2; i--) {
      cout << str[i];
    }
    
    cout << "\n";
  }

  
  return 0;
}
