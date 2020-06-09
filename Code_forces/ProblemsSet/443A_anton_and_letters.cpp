#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  char s[1001];
  vector<char> v(1001);
  int k = 0, counter = 0;

  for(int j = 0; j < 1000; j++) {
    cin >> s[j];
    if(s[j] == ',' || s[j] == ' ' || s[j] == '{') continue; 
    else if(s[j] == '}') break;
    else {
      v[k] = s[j];
      k++;
    }
  }
  v.resize(k);
  
  sort(v.begin(), v.end());

  for(unsigned int i = 0; i < v.size(); i++) {
    if(v[i] == v[i+1]) continue;
    else{
      counter++;
    }
  }

  cout << counter << endl;
  return 0;
}
