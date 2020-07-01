#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  while(n--) {
    int one = 0, step = 1, erase = 0, j = 0;
    string s;
    cin >> s;

    for(unsigned int i = 0; i < s.size(); i++) {
      if(s[i] == '1') { one++; }
    }
    
    for(unsigned int i = 0; i < s.size(); i++) {

      if(s[i] == '1' && step < one) { 
	j = i+1;  step++;
	while(s[j] == '0') {
	  erase++;
	  j++;
	}
      }
    } 
  cout << erase << endl; 
}
  
return 0;
}
