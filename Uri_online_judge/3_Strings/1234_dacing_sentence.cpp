#include <bits/stdc++.h>
using namespace std;

int main() {
  
  while(1) {

    string str;
    getline(cin, str);

    if(str.size() == 0) { break; }
    
    char new_str[str.size()];
    strcpy(new_str, str.c_str());
    bool up = true;
    
    for(unsigned int i = 0; i < strlen(new_str); i++) {

      char aux;

      if(new_str[i] == ' ') { cout << " "; }

      else if(up) {
	aux = putchar(toupper(new_str[i])); //this already prints
	up = false;
      }
      else {
	aux = putchar(tolower(new_str[i]));
	up = true;
      }
    }

    cout << "\n";
  }
  
  return 0;
}
