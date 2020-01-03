#include <iostream>
using namespace std;

int main(){

  int n, flag = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    if(flag == 0) {
      cout << "I hate ";
      if(i+1 == n) cout << "it "; //if is the last word
      else cout << "that ";
      flag = 1;
    }
    else{
        cout << "I love ";
	if(i+1 == n) cout << "it ";
	else cout << "that ";
	flag = 0;
    }
  }

  cout << endl;  
  return 0;
}
