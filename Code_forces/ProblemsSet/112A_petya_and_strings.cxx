#include <iostream>
using namespace std;

int main(){

  string strA, strB;
  cin >> strA >> strB;

  int str_size = strA.size(); //both of them have the same size

  for(int i = 0; i < str_size; i++){
    strA[i] = tolower(strA[i]);
    strB[i] = tolower(strB[i]);
  }

  if(strA > strB) cout << "1" << endl;
  else if (strA < strB) cout << "-1" << endl;
  else cout << "0" << endl;
		    
  return 0;
}
