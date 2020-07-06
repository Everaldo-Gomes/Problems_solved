#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int position = 0;
  
  for(unsigned int i = 0; i < nums.size(); i++) {
    if(nums[i] >= target) { position = i; break; } 
    else { position = i+1; } //last position
  }
  return position;
}

int main() {

  vector<int> v = {1,3,5,6,8,8,9,10};
  int t = 7;
  
  cout << searchInsert(v, t) << endl;
  return 0;
}
