#include <bits/stdc++.h>
using namespace std;

int numberOfSteps (int num);

int main() {

  cout << numberOfSteps(123) << endl;
  
  return 0;
}

int numberOfSteps (int num) {
  int qnt = 0;
  
  while(num > 0) {
    if(num % 2 == 0) { num /= 2; qnt++; }
    else { num -= 1; qnt++; }
  } 
  return qnt;
}
