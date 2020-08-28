#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums);

int main() {

  vector<int> v = {1,2,3,4};

  v = decompressRLElist(v);

  for(unsigned int j = 0; j < v.size(); j++) { cout << v[j];}
  
  cout << endl;
  return 0;
}

vector<int> decompressRLElist(vector<int>& nums) {
  const int size = nums.size();
  vector<int> values;
  int p = 0;
  
  for(int i = 0; i < size; i+=2) {
    int freq = nums[i];
    int val  = nums[i+1];

    values.resize(values.size() + freq);

    for(int j = 0; j < freq; j++, p++) {   
      values[p] = val;
    }
  }
  
  return values;
}
