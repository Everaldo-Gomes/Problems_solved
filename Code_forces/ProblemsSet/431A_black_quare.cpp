#include <iostream>
using namespace std;

int main(){

  /* a = calories
     t = how many times the strip t was touched
   */
 
  long long int a1, a2, a3, a4, t1 = 0, t2 = 0, t3 = 0, t4 = 0, ans;
  cin >> a1 >> a2 >> a3 >> a4;

  string str;
  cin >> str;

  long long int str_len = str.size();
  for(int i = 0; i < str_len; i++){
    if(str[i] == '1') t1++;
    else if(str[i] == '2') t2++;
    else if(str[i] == '3') t3++;
    else t4++; //str[i] == 4
  }    

  ans = a1*t1 + a2*t2 + a3*t3 + a4*t4;
 
  cout << ans << endl;
  return 0;
}
