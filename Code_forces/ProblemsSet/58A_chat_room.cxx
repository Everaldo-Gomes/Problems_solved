#include <iostream>
using namespace std;

int main(){

  int count = 0, k = 0;
  string in, hello = "hello";
  cin >> in;

  for(int i = 0; i < in.size(); i++){
    if(in[i] == hello[k]){
      count++; k++;
    }
  }

  if(count == 5) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
