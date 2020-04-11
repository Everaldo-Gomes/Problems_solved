#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> v(n);
  bool repeat = false;
  
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  while(1){
    for(int i = 0; i < n; i++){
      if(i == n-1) break;
      else{if(v[i] > v[i+1]){
	  int a = v[i] - v[i+1];
	  v[i] -= a;
	  v[i+1] += a;
	}
      }
    }
    
    for(int i = 0; i < n; i++){
      if(i == n-1) break;
      else{
	if(v[i] <= v[i+1]){
	  repeat = false;
	} 
	else{
	  repeat = true;
	  break;
	}
      }
    }
    if(repeat == false) break;  
  }
    
  //cout << "\n";
  for(int i = 0; i < n; i++){
    cout << v[i] << " ";
  }

  cout << endl;
  return 0;
}
