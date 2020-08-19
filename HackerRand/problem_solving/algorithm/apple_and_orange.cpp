#include <bits/stdc++.h>
using namespace std;

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

  int count = 0;
  
  //count apples
  for(unsigned int i = 0; i < apples.size(); i++) {
    if(a + apples[i] >= s && a + apples[i] <= t) { count++; }
  }
  cout << count << endl;
  count = 0;

  //count oranges
  for(unsigned int i = 0; i < oranges.size(); i++) {
    if(b + oranges[i] >= s && b + oranges[i] <= t) { count++; }
  }
  cout << count << endl;
}

int main() {

  vector<int> apples_list = {-2,2,1};
  vector<int> orange_list = {5,-6};

  countApplesAndOranges(7,11,5,15,apples_list, orange_list);

  return 0;
}
