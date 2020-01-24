#include <iostream>
using namespace std;

int main(){

  long long int value, times;
  cin >> value >> times;

  for(int i = 0; i < times; i++)
    if(value % 10 != 0) value--;
    else value /= 10;

  cout << value << endl;
  return 0;
}
