#include <iostream>
using namespace std;

int main(){

  long int k, n, w, a = 0, i = 0, aux = 0;

  cin >> k >> n >> w;

  for(i = 1; i <= w; i++){
    a += i*k;
  }

  aux = a - n;
  if(aux < 0) aux = 0;
  cout << aux << endl;
  
  return 0;
}
