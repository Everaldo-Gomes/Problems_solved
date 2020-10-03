#include <bits/stdc++.h>
using namespace std;

int main() {
    
  long int oleg, g1, g2, banknotes;
  cin >> oleg >> g1 >> g2 >> banknotes;

  vector<long int> v;

  for(long int i = 0, k = 0; i < banknotes; i++) {
    long int get_value;
    cin >> get_value;

    if(get_value > g1 && get_value < g2)  {
      v.resize(v.size() + 1);
      v[k] = get_value;
      k++;
    }
  }

  if(v.empty()) { cout << 0 << endl; }
  else { cout << v.size() << endl; }
  
  return 0;
}
