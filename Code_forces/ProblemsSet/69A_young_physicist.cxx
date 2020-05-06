#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n;
  bool zero = true;
  cin >> n;

  vector<vector<int>> v(n);
  vector<int> r(4);
  
  v.assign(n, vector<int>(3,0));
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      cin >> v[i][j];  
    }
  }

  for(int i = 0; i < 3; i++){      
    for(int j = 0; j < n; j++){
      r[i] += v[j][i]; 
    }
  }

  for(int i = 0; i < 3; i++){
    if(r[i] != 0){
      zero = false;
      break;
    }
  }
  
  if(zero) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
