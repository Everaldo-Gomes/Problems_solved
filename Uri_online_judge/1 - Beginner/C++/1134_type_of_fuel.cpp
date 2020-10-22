#include <iostream>
using namespace std;

int main () {

  int a = 0, d = 0, g = 0, t = 0;
  
  while(cin >> t) {
    
    if(t == 4) break;

    switch(t) {
      case 1:
	a++;
	break;
      case 2:
	g++;
	break;
      case 3:
	d++;
	break;
    }
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << a << endl;
  cout << "Gasolina: " << g << endl;
  cout << "Diesel: " << d << endl;
  return 0;
}
