#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int test;
  cin >> test;
  getchar();

  while(test--) {
    string str;
    getline(cin, str);
        
    //even
    for(unsigned int i = 0; i < str.size(); i++) {
      if(i % 2 == 0) { cout << str[i]; }        
    }
    cout << " ";
        
    //odd
    for(unsigned int i = 0; i < str.size(); i++) {
      if(i % 2 != 0) { cout << str[i]; }        
    }
    cout << "\n";
  }
  return 0;
}
