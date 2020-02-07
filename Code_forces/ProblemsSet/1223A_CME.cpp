#include <iostream>
using namespace std;

int main(){

  long long int value;
  int n,  matches = 0;
  cin >> n;
  long long int ans[n];
  
  for(int i = 0; i < n; i++){
    cin >> value;

    int a;
    if(value == 2) a = 1;
    else a = value % 2;

    //cout <<"a: " <<  a << endl;
    int b = value / 2;
    //cout << "B: " << b << endl;
    int c = a + b;
    //cout << "C " << c << endl;
    int d = a+b+c;
    while(d > value){
      d-=1; matches+=1;
    }	
    
    ans[i] = matches;
    matches = 0;
  }

  for(int i = 0; i < n; i++) cout << ans[i] << endl;
  return 0;
}
