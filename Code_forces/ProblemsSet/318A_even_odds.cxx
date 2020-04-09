#include <iostream>
using namespace std;

int main(){

  long long int n, k;
  
  cin >> n >> k;
  
  //odd numbers on the left
  if(k <= (n+1)/2){
    cout << k* 2-1 << endl;
  }

  //even numbers on the right
  else{
    cout << 2*(k-(n+1)/2) << endl;
  }
  return 0;
}
