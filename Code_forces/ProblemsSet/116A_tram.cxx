#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n, qnt = 0, b = 0;
  cin >> n;

  vector<vector<int>> stop(n);

  stop.assign(n, vector<int>(2,0));
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 2; j++){
      cin >> stop[i][j];    
    }
  }
  for(int i = 0; i < n; i++){
    qnt += (stop[i][1] - stop[i][0]);
      if(b < qnt) b = qnt;
  }

  cout << b << endl;
  return 0;
}
