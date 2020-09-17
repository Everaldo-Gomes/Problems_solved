#include <bits/stdc++.h>
using namespace std;

int main() {

    int r, c, count = 0, qnt = 0;
    cin >> r >> c;
    
    vector<string> v(r,string(c,0));
    
    for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
	cin >> v[i][j] ;
      }
    }

    //eat rows
    for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
	if(v[i][j] == 'S') { continue; }
	else {
	  count++; 
	  if(count == c) {
	    qnt += c;
	    for(int k = 0; k < c; k++) {
	      if(v[i][k] == 'S') { continue; }
	      v[i][k] = 'X';
	    }
	    count = 0;
	  }
	}
      }
      count = 0;
    }
    
    //eat columns
    for(int i = 0; i < c; i++) {
      for(int j = 0; j < r; j++) {
    	if(v[j][i] == 'S') { continue; }
    	else {
	  count++;
    	  if(count == r) {
    	    qnt += r;
    	    for(int k = 0; k < r; k++) {
    	      if(v[k][i] == 'S') { continue; }
	      else if(v[k][i] == 'X') { qnt--; }
    	      v[k][i] = 'X';
    	    }
    	    count = 0;
    	  }
    	}
      }
      count = 0;
    }
    
    //show
    // for(int i = 0; i < r; i++) {
    //   for(int j = 0; j < c; j++) {
    //  	cout << v[i][j] << " ";
    //   } 
    //   cout << "\n";
    // }
    cout << qnt << endl;
  
  return 0;
}
