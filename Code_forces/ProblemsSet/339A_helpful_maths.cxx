#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){

  string in, out[101];
  cin >> in;

  int in_size = in.size();
  int j = 0;
  
  for(int i = 0; i < in_size; i++){
    if(in[i] == '+') continue;
    else{
      out[j] = in[i];
      j++;
    }
  }

  //beginning, end j is the last position
  sort(out, out+j);
 
  //andding the + sign and showing result
  for(int i = 0; i < j; i++){
    cout << out[i];
    
    if(i != j-1) cout << "+";
  } 
  
  cout << endl;
  return 0;
}
