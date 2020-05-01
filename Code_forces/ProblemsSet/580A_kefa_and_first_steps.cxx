#include <iostream>
#include <vector>
using namespace std;

int main(){

  long int n, l = 0,  aux = 0;
  cin >> n;
 
  vector<long int> a(n+1);
 
  for(long i = 0; i < n; i++){
    cin >> a[i];
  }
 
  for(long i = 0; i < n; i++){
    if(a[i] <= a[i+1]) l++;
    else{
      if(l >= aux){
	aux = l+1;
	l = 0;
      }else{
	l = 0;
      }
     
    }
  }

  cout << aux << endl;
  
  return 0;
}
