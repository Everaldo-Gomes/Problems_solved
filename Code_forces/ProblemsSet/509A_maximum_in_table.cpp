#include <iostream>
using namespace std;

int main(){

  int n, ans = 0;
  cin >> n;
  int m[n][n];


  //fill with 1s
  int flag = 0;
  for(int i = 0; i < n; i++){
    if(flag == 0){
      for(int j = 0; j < n; j++){
	m[i][j] = 1;
	flag = 1;
      }
    }
    m[i][0] = 1;
  }

  //fill with others numbers
  if(n == 1) ans = 1;
  else{
    for(int i = 1; i < n; i++){
      for(int j = 1; j < n; j++){
	m[i][j] = (m[i-1][j] + m[i][j-1]);
	ans = m[i][j];
      }
    }
  }
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < n; j++){
  //     cout << m[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  cout << ans << endl;
  
  return 0;
}

