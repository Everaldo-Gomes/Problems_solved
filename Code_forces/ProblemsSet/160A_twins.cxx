#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
  long int n;
 
  long int sum = 0, current = 0, coins = 0, i = 0, j = 0; 
  cin >> n;  
   	
  vector<long int> v(n);
    
  for(i = 0; i < n; i++) {
    cin >>  v[i];
  }

  sort(v.begin(), v.end());
    
  for(i = n-1; i >= 0; i--) {
    current += v[i]; sum = 0; coins++;
     
    for(j = i-1; j >= 0; j--){
      sum += v[j];  
    }
 
    if(current > sum) {
      break;
    }
  }

  cout << coins << endl;
  
  return 0;
}
