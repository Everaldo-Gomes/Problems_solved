#include <bits/stdc++.h>
using namespace std;

int main() {

  int children, puzzles;
  cin >> children >> puzzles;
  
  vector<int> v(puzzles);
  for(int i = 0; i < puzzles; i++) { cin >> v[i]; }
  sort(v.begin(), v.end());

  int least = 1E9;
  
  //find the smallest pieces for each group of children
  for(int i = 0; i < puzzles; i++) {
    int large = 0, smaller = 1E9;
    if(i + children > v.size()) break;

    for(int j = i; j < i + children; j++) {
      //cout << v[j] << " ";
      if(v[j] >= large)  { large = v[j]; }
      if(v[j] < smaller) { smaller = v[j]; }
    }
    if(large - smaller < least) { least = large - smaller; }
    //cout << " | " << large << " " << smaller <<  " = " << large - smaller << " -> "<< least << endl;
  }

  cout << least << endl;
  
  return 0;
}
