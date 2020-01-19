#include <iostream>
using namespace std;
 
int main(){
  int n;
  cin >> n;
 
  long long int x, burle = 0, welfare, a[n];
 
  for(int i = 0; i < n; i++){
    cin >> x;
    a[i] = x;
  }
 
  //finding the greatest welfare
  welfare = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > welfare) welfare = a[i];
  }
   
  //giving welfare
  for(int i = 0; i < n; i++){
    if(a[i] == welfare) continue;
    else
      while(a[i] < welfare){
    a[i]++;  burle++;
      }
  }
 
  cout << burle << endl;
  return 0;
}
