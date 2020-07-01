#include <iostream>
#include <vector>
using namespace std;

int main() {

  long int house_shop1, house_shop2, shop1_shop2;
  long int a, b, c, d, e;
  cin >> house_shop1 >> house_shop2 >> shop1_shop2;

  //possible paths
  a = house_shop1 + shop1_shop2 + house_shop2;
  b = house_shop2 + shop1_shop2 + house_shop1; 
  c = house_shop1*2 + house_shop2*2;
  d = house_shop2*2 + shop1_shop2*2;
  e = house_shop1*2 + shop1_shop2*2;
  
  long int ma = min(a,b);
  long int mb = min(ma,c);
  long int mc = min(mb,d);
  long int md = min(mc, e);
    
  cout << md << endl;
  return 0;
}
