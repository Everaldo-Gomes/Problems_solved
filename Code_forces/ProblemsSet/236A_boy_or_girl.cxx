#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  string name;
  cin >> name;
  
  int s = name.size();
  vector<string> v(s);
  
  for(int i = 0; i < s; i++){
    v[i] = name[i];
  }
  
  sort(v.begin(), v.end());

  for(unsigned int i = 0; i < v.size(); i++){
    for(unsigned int j = 0; j < v.size(); j++){
      if(v[j] == v[j+1]){
   	v.erase(v.begin()+j); 
      }
    }
  }
  
  if(v.size() % 2 == 0)  cout << "CHAT WITH HER!" << endl;
  else cout << "IGNORE HIM!" << endl;
  
  return 0;
}
