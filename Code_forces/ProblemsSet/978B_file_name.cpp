#include <iostream>
using namespace std;

int main(){

  int n, x_counter = 0, x_left = 0;
  cin >> n;
  
  string file_name;
  cin >> file_name;
  
  for(int i = 0; i < n; i++){
    if(file_name[i] == 'x') x_counter++;
    if(file_name[i] == 'x' && file_name[i+1] == 'x' && file_name[i+2] == 'x')
      x_left++;
  }
  
  cout << x_left << endl;
  return 0;
}
