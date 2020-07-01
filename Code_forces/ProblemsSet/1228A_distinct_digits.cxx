#include <bits/stdc++.h>
using namespace std;

int main() {

  string str_l, aux;
  int r, x, x_aux;
  bool distinct = false;
  
  cin >> str_l >> r;

  aux = str_l;
  stringstream convert_(aux);
  convert_ >> x_aux;
  if(x_aux == r && r < 9) { cout << str_l << endl; }
  else {
    while(!distinct) {
    
      //compare all digits
      for(unsigned int i = 0; i < str_l.size(); i++) {
	for(unsigned int j = i+1; j < str_l.size(); j++) {
	  if(str_l[i] != str_l[j]) { distinct = true; }
	  else {
	    distinct = false;
	    break;
	  }
	}
	if(!distinct) break;
      }
    
      if(distinct) { cout << str_l << endl; }
      else {
	//convert to int add 1, 
	stringstream convert(str_l);
	convert >> x;
	x++;

	if(x > r) { cout << -1 << endl; break; }
      
	//convert to string
	str_l = to_string(x);
      }
    }
  }
  
  return 0;
}
