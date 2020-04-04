#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n, count = 0;
  cin >> n;

  string s;
  vector<string> v(n);
  cin >> s;

  for(int i = 0; i < n; i++){
    if(s[i] == s[i+1]){
      count++;
      continue;
    }
    else{
      v[i] = s[i];
    }
  }
  
  cout << count << endl;
  return 0;
}
