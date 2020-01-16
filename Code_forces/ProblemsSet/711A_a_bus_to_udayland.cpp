#include <iostream>
using namespace std;

int main(){

  int n, available = 0;
  cin >> n;
  string seat, a[n];

  for(int i = 0; i < n; i++){
    cin >> seat;

    if(available == 0){
      if(seat[0] == 'O' && seat[1] == 'O'){
	seat[0] = '+'; seat[1] = '+';
	available = 1;
      }
      else if(seat[3] == 'O' && seat[4] == 'O'){
	seat[3] = '+'; seat[4] = '+';
	available = 1;
      } 
    }
    a[i] = seat;
  }

  if(available == 1){
    cout << "YES" << endl;
    for(int i = 0; i < n; i++) cout << a[i] << endl;
  }
  else cout << "NO" << endl;
   
  return 0;
}
