#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
  int ans = 0;

  for(unsigned int i = 0; i < grid.size(); i++) {
    for(unsigned int j = 0; j < grid[i].size(); j++) {
      if(grid[i][j] < 0) { ans++; }
    }
  }
  return ans;
}

int main() {

  int n = 4, m = 4;
  vector<vector<int>> g(n, vector<int>(m,0));
  int aux;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> aux;
      g[i][j] = aux;
      cout << g[i][j] << " ";
    }
    cout << "\n";
  }

  cout << countNegatives(g) << endl;
  
  return 0;
}
