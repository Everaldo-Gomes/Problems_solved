class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int ans = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i-1] >= nums[i]) {
                
                int aux = nums[i-1] - nums[i];
                if (aux == 0) {
                    nums[i]++;
                    ans++;
                }
                else {
                    aux++;
                    nums[i] += aux;
                    ans += aux;
                }
            }
        }
        
        return ans;
    }
};
