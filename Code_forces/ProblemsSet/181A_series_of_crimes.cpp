#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, c, k = 0;
  cin >> r >> c;

  vector<string> v(r, string(c,0));
  vector<int> rows(3), columns(3);

  //getting info
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> v[i][j];
    }
  }

  //finding the robbed district
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(v[i][j] == '*') {
	rows[k] = i+1;
	columns[k] = j+1;
	k++;
      }
    }
  }

  //finding the next robbery
  sort(rows.begin(), rows.end());
  sort(columns.begin(), columns.end());

  int new_position_row, new_position_column;
    
  //rows
  if(rows[0] == rows[1]) { new_position_row = rows[2]; }
  else { new_position_row = rows[0]; }

  //columns
  if(columns[0] == columns[1]) { new_position_column = columns[2]; }
  else { new_position_column = columns[0]; }
   
  cout << new_position_row << " " << new_position_column << endl;
      
  return 0;
}
