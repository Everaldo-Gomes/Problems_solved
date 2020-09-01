#include <bits/stdc++.h>
using namespace std;

bool check_index(vector<int> &t, int n) {
  bool it_has = false;

  for(unsigned int i = 0; i < t.size(); i++) {
    if(t[i] == n) {
      it_has = true;
      break;
    }
  }
  return it_has;
}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
  vector<int> values(nums.size()); 
  vector<int> t(nums.size()); //store the index already used

    for(unsigned int i = 0; i < nums.size(); i++) {
      int v = nums[i];
      int j = index[i];    
      t[i] = j;   

      if(check_index(t,j)) {
	for(int k = values.size()-1; k > j; k--) {
	  swap(values[k],values[k-1]);
	}
	values[j] = v;
      }
      else { values[j] = nums[i]; }
    }
  
    return values;
}


int main() {

  vector<int> n = {1,2,3,4,0};
  vector<int> i = {0,1,2,3,0};
  vector<int> ans(n.size());
  
  ans = createTargetArray(n,i) ;

  for(unsigned int i = 0; i < n.size(); i++) { cout << ans[i] << " " ; }

  cout << endl;
  return 0;
}
