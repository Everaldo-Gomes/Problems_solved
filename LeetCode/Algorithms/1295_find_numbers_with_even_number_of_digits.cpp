#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int findNumbers(vector<int>& nums) {
  int result = 0, j = 0;
  string aux;
  
  for(unsigned int i = 0; i < nums.size(); i++) {
    int count = 0;

    stringstream to_string;
    to_string << nums[i];
    to_string >> aux;

    for(; j < aux.size(); j++) { /*j will be the size of the string*/ }

    if(j % 2 == 0) result++;
    j = 0;
  }
  
  return result;
}

int main() {
  //vector<int> v = {677,207,13,208,342,596};
  //vector<int> v = {555,901,482,1771};
  vector<int> v = {12,345,2,6,7896};
  
  cout << findNumbers(v) << endl;
  
  return 0;
}
