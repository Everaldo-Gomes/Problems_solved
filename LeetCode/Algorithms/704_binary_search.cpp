class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int list_size = nums.size();
        
        if (list_size > 1) {
        
            int beginning = 0;
            int middle;

            while (beginning <= list_size) {

                middle = (beginning + list_size) / 2;

                if (target < nums[middle]) {
                    list_size = middle-1;
                }
                else if (target > nums[middle]) {
                    beginning = middle+1;
                }
                else {
                    return middle;
                }
            }
        }
        else if (nums[0] == target) {
                return 0;
        }
        
        return -1;
    }
};
