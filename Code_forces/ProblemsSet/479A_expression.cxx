#include <iostream>
using namespace std;

int main(){

  int a, b, c, ans = 0;
  cin >> a >> b >> c;

  ans = a * b * c;
  
  if(ans < a + (b * c)) { ans =  a + (b * c); }
  if(ans < a * (b + c)) { ans =  a * (b + c); }
  if(ans < (a+b) * c)   { ans = (a+b) * c;    }
  if(ans < a + b + c)   { ans = a + b + c;    }
  if(ans < (a * b) + c) { ans =  (a * b) + c; }
 
  cout << ans << endl;
  return 0;
}
