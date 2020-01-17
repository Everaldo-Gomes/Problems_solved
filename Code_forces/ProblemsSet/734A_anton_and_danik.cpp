#include <iostream>
using namespace std;

int main(){

  long long n;
  cin >> n;
  string winner, x;
  cin >> winner;

  int a = 0, d = 0;
  
  for(int i = 0; i < n; i++){
    if(winner[i] == 'A') a += 1;
    else d += 1;
  }

  if(a > d) cout << "Anton" << endl;
  else if(a < d) cout << "Danik" << endl;
  else cout << "Friendship" << endl;
  
  return 0;
}
