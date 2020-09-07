#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
  int n = 0, ans = 0;

  sort(nums.begin(), nums.end());
  nums.resize(nums.size() + 1); //avoid overflow

  for(unsigned int i = 0, j = 0; i < nums.size(); i++) {
    int aux = nums[j];

    if(nums[i] != aux) {
      int a = (n*(n-1))/2; //qnt of pair
      ans += a;
      j++;
      i -= 1;
      n = 0;
    }
    else { n++; }
  }

  return ans;
}

int main() {

  vector<int> v = {1,2,3,1,1,3};
  
  cout << numIdenticalPairs(v) << endl;
  
  return 0;
}
