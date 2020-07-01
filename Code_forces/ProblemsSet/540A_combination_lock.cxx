#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {

  int n, turn = 0;
  cin >> n;
  
  string str1, str2;
  getchar();   //necessary to take all inputs correctly
  getline(cin, str1);
  getline(cin, str2);

  vector<int> v1(n), v2(n);

  //converting to int
  for(int i = 0; i < n; i++) {
    string aux1, aux2;
    aux1 = str1[i];
    aux2 = str2[i];

    stringstream conv1(aux1);
    stringstream conv2(aux2);
    
    int int_aux1, int_aux2;
    conv1 >> int_aux1;
    conv2 >> int_aux2;

    v1[i] = int_aux1;
    v2[i] = int_aux2; 
  }

  //calculating
  for(int i = 0; i < n; i++) {

    int aux_plus = v1[i], aux_minus = v1[i], turn1 = 0, turn2 = 0;

    while(aux_plus != v2[i]) {
      turn1++; aux_plus++;
      if(aux_plus == 10) aux_plus = 0; 
    }
    while(aux_minus != v2[i]) {
      turn2++; aux_minus--;
      if(aux_minus == -1) aux_minus = 9;
    }
    
    turn += min(turn1, turn2);
  }
  
  cout << turn << endl;
  return 0;
}
