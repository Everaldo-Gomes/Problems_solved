class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // preventing from k being greater than the list size
        while(k > nums.size()) {
            k -= nums.size();
        }

        vector<int> v(nums.size());
        int j = 0;

        // values k+ 
        for(unsigned int i = nums.size()-k; i < nums.size(); i++, j++) { 
            v[j] = nums[i]; 
        }

        // values k-
        for(unsigned int i = 0; i < nums.size()-k; i++, j++) { 
            v[j] = nums[i]; 
        }

        // must pass all the values again to nums, since cannot return the new list (v)
        for(unsigned int i = 0; i < v.size(); i++) { 
            nums[i] = v[i]; 
        }        
    }
};
