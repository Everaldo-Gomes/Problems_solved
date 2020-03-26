#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  long unsigned int qnt, i, j, n = 0, o = 0, e = 0, z = 0, r = 0, one = 0, zero = 0;
  vector<string> str;

  cin >> qnt;
  str.resize(qnt);

  for(i = 0; i < qnt; i++)
    cin >> str[i];

  //counting letters
  for(j = 0; j < qnt; j++){
    if(str[0][j] == 'n') n++;
    if(str[0][j] == 'e') e++;
    if(str[0][j] == 'o') o++;
    if(str[0][j] == 'z') z++;
    if(str[0][j] == 'r') r++;
  }

  //verify how many words "one" can have
  while(o >= 1 && n >= 1 && e >= 1){
    one++; o--; n--; e--;
  }

  //verify how many words "zero" can have
  while(z >= 1 && e >= 1 && r >= 1 && o >= 1){
    zero++; z--; e--; r--; o--;
  }

  //showing first all numbers 1, then number 0
  while(zero > 0 || one > 0){
    if(one > 0)
      while(one > 0){  
	cout << "1";
	one--;
	cout << " ";
      }

    while(zero > 0){
      cout << "0";
      zero--;
      if(zero != 0)
	cout << " ";
    }
  }

  cout << endl;
  return 0;
}
