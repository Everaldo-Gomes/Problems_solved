#include <iostream>
using namespace std;

int main(){

  int n, h, x, ans = 0;

  cin >> n >> h;

  for(int i = 0; i < n; i++){
    cin >> x;
    if(x > h) ans += 2; //bend down
    else ans += 1; //stand up
  }
  
  cout << ans << endl;
  return 0;
}
