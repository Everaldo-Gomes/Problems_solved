#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, chest = 0, biceps = 0, back = 0, count = 0;
  cin >> n;

  vector<int> v(n);
  
  for(int i = 0; i < n; i++) {
    int aux;
    cin >> aux;
    v[i] = aux;

    if(count == 0) chest += v[i];
    else if(count == 1) biceps += v[i];
    else back += v[i];

    count++;
    if(count >= 3) count = 0;
  }

  if(chest > biceps && chest > back) cout << "chest" << endl;
  else if(biceps > chest && biceps > back) cout << "biceps" << endl;
  else cout << "back" << endl;

  return 0;
}
