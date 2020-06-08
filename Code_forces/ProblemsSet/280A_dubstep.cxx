#include <iostream>
using namespace std;

int main(){

  string s, b[1000];
  cin >> s;

  int c = 0, j = 1;

  for(unsigned int i = 0; i < s.size(); ){
    c++;
    if(c == 3){
      c = 0;
      if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
	i += 3;
	b[j] = " "; j++; //put the spaces
      }
      else{
	b[j] = s[i];
	i++; j++;
      }	
    } 
  }
  
  for(int i = 1; i < j; i++){
    cout << b[i];
  }
  
  cout << endl;
  return 0;
}
