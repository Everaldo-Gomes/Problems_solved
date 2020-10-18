#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  getchar();
  
  while(n--) {

    int qnt = 0;
    string value;
    getline(cin, value);
    //getchar();
    
    for(unsigned int i = 0; i < value.size(); i++) {

      //0,6,9
      if(value[i] == '0' || value[i] == '6' || value[i] == '9') { qnt += 6; }
    
      //1
      else if(value[i] == '1') { qnt += 2; }

      //2,3,5
      else if(value[i] == '2' || value[i] == '3' || value[i] == '5') { qnt += 5; }

      //4
      else if(value[i] == '4') { qnt += 4; }

      //7
      else if(value[i] == '7') { qnt += 3; }

      //8
      else { qnt += 7; }
    }

    cout << qnt << " leds"<< endl;
  }
  
  return 0;
}
