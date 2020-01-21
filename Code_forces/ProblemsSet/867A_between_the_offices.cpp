#include <iostream>
using namespace std;

int main(){

  int n, timesS = 0, timesF = 0;
  cin >> n;
  char flight[n+1], x;

  //putting values
  for(int i = 0; i < n; i++){
    cin >> x;
    flight[i] = x;
  }

  //calculating
  for(int i = 0; i < n; i++){
    if(flight[i] == 'S' && flight[i+1] == 'F'){      
	timesS += 1;
    }
    else if(flight[i] == 'F' && flight[i+1] == 'S')
      timesF += 1;
  }

  //result
  if(timesS > timesF) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
