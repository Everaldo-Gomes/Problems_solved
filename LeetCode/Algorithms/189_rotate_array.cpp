#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {

  //preventing from k be greater than list size
  while(k > nums.size()) {
    k -= nums.size();
  }
  
  vector<int> v(nums.size());
  int j = 0;
  
  for(unsigned int i =  nums.size()-k; i < nums.size(); i++, j++) { v[j] = nums[i]; }
  
  for(unsigned int i = 0; i < nums.size()-k; i++, j++) { v[j] = nums[i]; }

  //must pass all the values again to nums, since cannot return the new list (v)
  for(unsigned int i = 0; i < v.size(); i++) { nums[i] = v[i]; }
      
}

int main() {

  vector<int> v = {1,2,3,4,5,6,7,8,9};
  int k = 20;  //number of times to rotate

  cout << "Before rotating: ";
  for(unsigned int i = 0; i < v.size(); i++) { cout << v[i] << " "; }
  cout << "\n";
  
  rotate(v,k);

  cout << "After rotating:  ";
  for(unsigned int i = 0; i < v.size(); i++) { cout << v[i] << " "; }

  cout << endl;
  return 0;
}

/* brute force. using the same list. It is right, but takes to much time
   while(k--) {

   int last = nums[nums.size()-1]; //get the last value

   //move values
   for(unsigned int i = nums.size()-1; i >= 1; i--) {
   nums[i] = nums[i-1];
   }
    
   nums[0] = last; //set the first value
   } 
*/
