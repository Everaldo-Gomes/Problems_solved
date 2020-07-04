#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {

  int j = 0;
  for(unsigned int i = 1; i < nums.size(); ) {
    if(nums[i] == nums[j]) {
      nums.erase(nums.begin() + j);
      i = j+1;
    }
    else { i++; j++; }
  }
  return nums.size();
}

int main() {
  
  vector<int> v = {0,0,1,1,1,2,2,3,3,4};
  
  cout << removeDuplicates(v) << endl;
  return 0;
}

  /*  take to much time
  for(unsigned int i = 0; i < nums.size(); i++) {
    for(unsigned int j = i+1; j < nums.size(); j++) {
      if(nums[i] == nums[j]) {
	nums.erase(nums.begin() + j);
	j = i;
      }      
    }
  }
  */
