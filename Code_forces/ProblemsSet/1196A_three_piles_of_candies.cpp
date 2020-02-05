#include <iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  long long int p1, p2, p3, ans[n];
  
  for(int i = 0; i < n; i++){
    cin >> p1 >> p2 >> p3;

    ans[i] = (p1+p2+p3)/2; //or bob_pick both of them have the same value
  }
  
  //result
  for(int i = 0; i < n; i++) cout << ans[i] << endl;

  cout << time_spent << endl;
  return 0;
}
