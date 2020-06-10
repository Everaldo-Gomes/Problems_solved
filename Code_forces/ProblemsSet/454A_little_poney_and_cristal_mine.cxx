#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, a = 0;
  cin >> n;
  
  vector<string> v(n, string(n, 0));

  //fill with D
  for(int i = 0; i < n; i++) { 
    for(int j = 0; j < n; j++) {

      v[i][j] = '*';
      
      //fill in ascending order
      if(i <= n/2) {
	for(int k = n/2 - i; k <= n/2 + i; k++) {
	  v[i][k] = 'D';
	}
	a = i; //get the previous indice when fill all row 
      }
      else {
	//fill in descending order
	for(int k = n/2 - a; k <= n/2 + a; k++) { 
	  v[i][k] = 'D';
	} 
      } 
      cout << v[i][j];  //show diamond  
    }
    cout << "\n";
    a--; 
  }
    
  return 0;
}
