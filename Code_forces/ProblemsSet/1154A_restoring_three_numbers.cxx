#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<long unsigned int> v(5);
  long unsigned int aux, greatest;

  for(int i = 0; i < 4; i++){
    cin >> v[i]; 
  }

  greatest = v[0];
  for(int i = 0; i < 4; i++){
    if(v[i] > greatest) greatest = v[i];
  } 

  for(int i = 0; i < 4; i++){  
    if(v[i] == greatest){
      continue;
    }
    cout << greatest - v[i] << " ";
  }

  cout << endl;
  return 0;
}
