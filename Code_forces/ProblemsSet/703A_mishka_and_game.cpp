#include <iostream>
using namespace std;

int main(){

  int n, x, y, m = 0, c = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x >> y;
    if(x > y) m +=1;
    else if(x < y) c += 1;
    else continue;
  }

  if(m > c) cout << "Mishka" << endl;
  else if(m < c) cout << "Chris" << endl;
  else cout << "Friendship is magic!^^" << endl;
  
  return 0;
}
