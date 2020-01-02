#include <iostream>
using namespace std;

int main(){

  int qnt, ans = 0;
  char op[4];
  cin >> qnt;

  for(int i = 0; i < qnt; i++){
    cin >> op;

    if((op[0] == '+' && op[1] == '+' && op[2] == 'X') ||
       (op[0] == 'X' && op[1] == '+' && op[2] == '+')) ans++;
    else ans --;
  }
  
  cout << ans << endl;

  return 0;
}
