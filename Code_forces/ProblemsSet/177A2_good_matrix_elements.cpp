#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, sum = 0;
  cin >> n;
  vector<vector<int>> v(n,vector<int>(n,0));
    
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> v[i][j];
      sum += v[i][j];  //sum all
    }
  }

  if(n <= 3) { cout << sum << endl; }
  else {
    int sum = 0, j = 0;
      
    //main diagonal
    for(int i = 0; i < n; i++) {
      j = i;
      sum += v[i][j];
      v[i][j] = 0;
    }

    //second diagonal
    j = 0;
    for(int i = n-1; i >= 0; i--, j++) {
      if(v[i][j] != 0) {
	sum += v[i][j];
	v[i][j] = 0;
      }
    }

    //middle row
    j = 0;
    for(int i = (n-1)/2; j < n; j++) {
      if(v[i][j] != 0) {
	sum += v[i][j];
	v[i][j] = 0;
      }
    }

    //middle column
    j = (n-1)/2;
    for(int i = 0; i < n; i++) {
      if(v[i][j] != 0) {
	sum += v[i][j];
	v[i][j] = 0;
      }
    }
      
    cout << sum << endl;
  }
      
  return 0;
}
