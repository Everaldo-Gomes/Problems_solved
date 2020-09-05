#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n);

int main() {

  vector<int> v = {2,5,1,3,4,7};
  int n = 3;
  
  shuffle(v,n);
  
  for(int i = 0; i < 2*n; i++) { cout << v[i]; }

  cout << endl;
  return 0;
}

vector<int> shuffle(vector<int>& nums, int n) {

  int mid = nums.size() / 2;
  int p = mid, j = 0;
  vector<int> values(2*n);

  for(int i = 0; i < n; i++) {

    values[j] = nums[i];
    j++;
   
    values[j] = nums[p]; 
    j++; p++;    
  }

  for(int i = 0; i < n*2; i++) { nums[i] = values[i]; }

  return values;
}
