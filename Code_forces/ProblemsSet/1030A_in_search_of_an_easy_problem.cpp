#include <iostream>
using namespace std;

int main(){

  int times, ans, flag = 0;
  cin >> times;

  for(int i = 0; i < times; i++){
    cin >> ans;
    if(ans == 1) flag = 1; 
  }

  if(flag == 1) cout << "HARD" << endl;
  else cout << "EASY" << endl;

  
  return 0;
}
