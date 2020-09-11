#include <bits/stdc++.h>
using namespace std;

int main() {
    
  string str;
  cin >> str;

  bool has_nine = false;
  int position_decimal_point;
    
  for(unsigned int i = str.size()-1; i >= 0; i--) {
    if(str[i] == '.') {
      position_decimal_point = i;
      if(str[i-1] == '9') { has_nine = true; }
      break;
    }
  }
    
  if(!has_nine) {

    char decimal_part = str[position_decimal_point+1];
    char value_to_change = str[position_decimal_point-1];
      
    if(decimal_part < '5') {
      int i = 0;
      while(str[i] != '.') {
	cout << str[i];
	i++;
      }
      cout << endl;
    }
    else {
      int aux = (int)value_to_change;
      aux++;
      value_to_change = (char)aux;
      str[position_decimal_point-1] = value_to_change;
      int i = 0;
      while(str[i] != '.') {
	cout << str[i];
	i++;
      }
      cout << endl;
    }
  }
  else { cout << "GOTO Vasilisa." << endl; }
 
  return 0;
}
