#include <iostream>
#include <vector>
using namespace std;

int main() {

  int turn = 0, p = 0; //p is here because it doesnt need to start at postion 0

  vector<string> v = {"a","b","c","d","e","f","g","h","i","j","k","l","m",
		      "n","o","p","q","r","s","t","u","v","w","x","y","z"};

  string str;
  cin >> str;

  vector<string> name(str.size());
  for(unsigned int i = 0; i < name.size(); i++) { name[i] = str[i]; }
  
  for(unsigned int i = 0; i < name.size(); i++) {

    int turn_plus = 0, turn_minus = 0, p_aux = p;
    
    while(name[i] != v[p]) {
      turn_plus++;
      p++;
      if(p > 25) p = 0; //change to 26
    }
    
    //p = 0; //is used only if want to start searching at postion 0
    //to do so, p_aux must be p

    while(name[i] != v[p_aux]) {
      turn_minus++;
      p_aux--;
      if(p_aux < 0) p_aux = 25; //change to 26
    }
    
    turn += min(turn_plus, turn_minus);
  }
  cout << turn << endl;
  
  return 0;
}
