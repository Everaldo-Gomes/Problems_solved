#include <iostream>
#include <cmath>
using namespace std;

int f(long long int);
int count = 0;

int main(){
  
  int qnt_n, v[1001];
  long long n;

  cin >> qnt_n;
  for(int i = 0; i < qnt_n; i++){
    cin >> n;
    int a = f(n);
    v[i] = a;
    count = 0;
  }
  for(int i = 0; i < qnt_n; i++)
    cout << v[i] << endl;
  return 0;
}

int f(long long int value){
  if(value == 1) return 0;
  
  else if(value % 2 == 0){
    count += 1;
    value = value/2;
    if(value == 1) return count;
    else f(value);
  }
  else if(value % 3 == 0){
    count += 1;
    value = (value*2)/3;
    if(value == 1) return count;
    else f(value);
  }
  else if(value % 5 == 0){
    count += 1;
    value = (value*4)/5;
    if(value == 1) return count;
    else f(value);
  }
  else{
    return -1;
  }
}
