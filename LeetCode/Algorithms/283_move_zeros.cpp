class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for (long long int i = 1, j = 0; i < nums.size(); i++) {
                
            if (nums[j] == 0 && nums[i] != 0) {
                swap(nums[j], nums[i]);
                i = j;
                j++;
            }
            else if (nums[j] != 0) {
                j++;
            }
        }
    }    
};

/*

O(n^2) --> time limit exeeded

for (long long int i = 0; i < nums.size(); i++) {
            for (long long int j = 1; j < nums.size(); j++) {
            
                if (nums[j-1] == 0) {
                    swap(nums[j-1], nums[j]);
                }
            }
        }
*/
