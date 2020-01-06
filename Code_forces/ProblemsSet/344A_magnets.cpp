#include <iostream>
using namespace std;

int main(){

  long int n;
  cin >> n;
  string str, aux;
  int group = 0;
  
  for(int i = 0; i < n; i++){
    cin >> str;

    //as aux has nothing, than ill have the first group
    if(str != aux) group++;
    
    aux = str;
  }
  cout << group << endl;  
  return 0;
}
