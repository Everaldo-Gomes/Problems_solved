#include <iostream>
#include <vector>
using namespace std;

int main() {

  int n, m, qnt, input;
  cin >> n >> m;

  vector<int> bulb(m+1);

  //list of bulbs
  for(int i = 1, j = 0; i <= m, j < m; i++, j++) bulb[j] = i; 
  
  while(n--) {

    cin >> qnt;

    for(int i = 0; i < qnt; i++) {
      cin >> input;
      
      for(int i = 0; i <= bulb.size(); i++) {
	if(input == bulb[i]) {
	  bulb.erase(bulb.begin()+i);
	}
      }
    }
  }

  //using only empty() for some test get segmentation fault
  if(bulb.empty() || bulb.size() <= 1) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
