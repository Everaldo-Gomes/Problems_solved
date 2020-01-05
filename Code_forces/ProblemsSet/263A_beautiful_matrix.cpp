#include <iostream>
using namespace std;

int main(){

  int m[5][5], values, ans = 0;
  
  //insert values
  for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++){
      cin >> values;
      m[i][j] = values;
    }
      
  //finding the number 1
  int c, r;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(m[i][j] == 1){
	c = i; r = j;
	break;
      }
    }
  }
  
  //middle = m[2][2];
  while(c != 2 || r != 2){
    //   cout << "\n"; //erase
    if(c != 2){
      if(c >= 4) { c = 0; m[4][r] = 0; m[c][r] = 1;}
      else{
	if(c - 1 == 2){
	  c--;
	  m[c+1][r] = 0;
	  m[c][r] = 1;
	  ans++;
	}
	else{
	  c++;
	  m[c-1][r] = 0;
	  m[c][r] = 1;
	  ans++;
	}
      }
    }
    else if(r != 2){
      if(r >= 4){r = 0; m[c][4] = 0; m[c][r] = 1;}
      else{
	if(r - 1 == 2){
	  r--;
	  m[c][r+1] = 0;
	  m[c][r] = 1;
	  ans++;
	}
	else{
	  r++;
	  m[c][r-1] = 0;
	  m[c][r] = 1;
	  ans++;
	}
      }
    }
   
  // //show erase
  // for(int i = 0; i < 5; i++){
  //   for(int j = 0; j < 5; j++)
  //     cout << m[i][j] << " ";
  //   cout << "\n";
  // }

  }
  
  
  cout << ans << endl;
  return 0;
}


