#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
vector<bool> values(5);

int main() {

  vector<int> v = {2,3,5,1,3};
  int extra = 3;
  
  kidsWithCandies(v,extra);

  for(unsigned int i = 0; i < 5; i++) { cout << values[i]; }

  cout << endl;
  return 0;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
  int greatest = candies[0];
  //vector<bool> values(candies.size());
  
  //find the greatest value
  for(unsigned int i = 1; i < candies.size(); i++) {
    int aux = max(candies[i], candies[i-1]);
    if(aux > greatest) { greatest = aux; }
  }
  
  //do what the problem wants
  for(unsigned int i = 0; i < candies.size(); i++) {
    if(candies[i] + extraCandies >= greatest) { values[i] = true; }
    else { values[i] = false; }
  }
 
  return values;
}
