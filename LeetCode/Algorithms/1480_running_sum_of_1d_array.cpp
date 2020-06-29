#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
  int sum = 0;
        
  for(int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    nums[i] = sum;
  }
  return nums;
}


int main() {

  vector<int> v = {3,1,2,10,1};

  runningSum(v);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}

