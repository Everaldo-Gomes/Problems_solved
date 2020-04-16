#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  int n, l = 0;
  cin >> n;
  
  vector<string> lower = {"a","A","b","B","c","C","d","D","c","D","e","E","f","F","g","G","h","H",
			  "i","I","j","J","k","K","l","L","m","M","n","N","o","O","p","P","q","Q",
			  "r","R","s","S","t","T","u","U","v","V","w","W","y","Y","x","X","z","Z"};
   
  string s;  
  cin >> s;

  vector<string> v(n+1), v2(2*n);
  for(int i = 0; i < n; i++ ){
    s[i] = tolower(s[i]);
    v[i] = s[i];
  }

  sort(v.begin(), v.end());
  
  int j = 0;
  for(int i = 0; i < n; i++ ){
    if(v[i] == v[i+1]) { continue; }
    v2[j] = v[i];
    j++;
  }
  
  if(j < 26) cout << "NO" << endl;
  else{
    for(int i = 0; i < n; i++ ){
      for(unsigned int j = 0; j < lower.size(); j++){
	if(v2[i] == lower[j]){
	  l++;
	}
      }
    }
    if(l < 26) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}
