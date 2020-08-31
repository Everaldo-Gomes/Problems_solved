#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums);
  
int main() {
  
  vector<int> v = {8,1,2,2,3};

  v = smallerNumbersThanCurrent(v);

  for(unsigned int i = 0; i < v.size(); i++) { cout << v[i] << " "; }

  return 0;
}

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
  const int size = nums.size();
  int p = 0, qnt = 0;
  vector<int> values(size);

  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      if(j == i) continue;
      else if(nums[i] > nums[j]) { qnt++; }
    }
    values[p] = qnt;
    p++;
    qnt = 0;
  }
  return values;
}
