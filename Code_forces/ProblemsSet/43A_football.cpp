#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n, t1 = 0, t2 = 0;
  cin >> n;

  string aux = "";
  string t2_name;
  
  vector<string> team_name(n);
  
  for(int i = 0; i < n; i++) {
    string team;
    cin >> team;
    team_name[i] = team;

    //count how many times team 1 won
    if(aux == team) { t1++; }
    else if(aux != team && i == 0) {
      aux = team_name[0];
      t1++;
    }
    else { t2_name = team_name[i]; } //get team 2's name
  }

  t2 = n - t1; //victories of team 2
  
  if(t1 > t2) { cout << aux << endl; }
  else { cout << t2_name << endl; }
  
  return 0;
}
