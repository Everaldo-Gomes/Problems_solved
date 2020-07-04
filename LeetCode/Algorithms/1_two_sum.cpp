#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans(2);
  bool stop = false;
  
  for(unsigned int i = 0; i < nums.size(); i++) {
    for(unsigned int j = i+1; j < nums.size(); j++) {
      if(nums[i] + nums[j] == target) {
	ans[0] = i; ans[1] = j;
	break;
	stop = true;
      }
    }
    if(stop) break;  
    }
  return ans; 
}

int main() {

  vector<int> v = {2,7,11,15};

  v = twoSum(v,9);

  for(unsigned int i = 0; i < v.size(); i++) { cout << v[i] << " " ;}
  cout << endl;
  return 0;
}

