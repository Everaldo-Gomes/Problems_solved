#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {

  for(unsigned int i = 0; i < nums.size(); i++) {
    if(nums[i] == val) {
      nums.erase(nums.begin() + i);
      i -= 1;
    }
  }
  return nums.size();
}

int main() {

  vector<int> v = {0,1,2,2,3,0,4,2};
  int val = 2;
  
  cout <<  removeElement(v,val) << endl;
  
  return 0;
}
