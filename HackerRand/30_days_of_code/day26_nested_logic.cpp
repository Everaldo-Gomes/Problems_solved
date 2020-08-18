#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int rd, rm, ry, ed, em, ey, fine = 0;
  cin >> rd >> rm >> ry;
  cin >> ed >> em >> ey;

  if(ry > ey) {
    fine = 10000;  
  }
  else if(rm > em && ry >= ey) {
    fine = 500 * (rm - em);
  }
  else if(rd > ed && (rm >= em && ry >= ey)) {
    fine = 15 * (rd - ed);
  }
  else { fine = 0;  }
    
  cout << fine << endl;
  return 0;
}
