#include <iostream>
using namespace std;

int main(){

  long long int x, remain, aux;
  int step = 0;
  cin >> x;

  aux = x / 5;
  step += aux;
  remain = x % 5;
  
  aux = remain / 4;
  step += aux;
  remain %= 4;
  
  aux = remain / 3;
  step += aux;
  remain %= 3;
    
  aux = remain / 2;
  step += aux;
  remain %= 2;
    
  aux = remain / 1;
  step += aux;
  remain %= 1;

  cout <<  step << endl;
  return 0;
}
