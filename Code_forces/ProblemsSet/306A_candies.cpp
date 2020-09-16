#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int candies, friends;
  cin >> candies >> friends;

  vector<int> v(friends,0);

  while(candies >= 1) {
    for(int i = 0; i < friends; i++) {
      v[i]++;
      candies--;
      if(candies <= 0) { break; }
    }
  }

  for(int i = 0; i < friends; i++) {
    cout << v[i];
    if(i+1 < friends) cout << " ";
  }
  cout << "\n";
     
  return 0;
}
