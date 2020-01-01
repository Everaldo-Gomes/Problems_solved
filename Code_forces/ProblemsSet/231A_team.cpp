#include <iostream>
using namespace std;

int main(){
  int qnt, ans = 0;
  short int n1, n2, n3;
  cin >> qnt;
  
  for(int i = 0; i < qnt; i++){
    cin >> n1 >> n2 >> n3;
    if((n1 == 1 && n2 == 1) || (n1 == 1 && n3 == 1) || (n2 == 1 && n3 == 1))
      ans++;
  }

  cout << ans << endl;
  return 0;
}
