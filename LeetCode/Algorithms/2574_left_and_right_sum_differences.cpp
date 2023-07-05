class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

      vector<int> left, right;
      int last_val {0};
            
      left.push_back(0);

      for (int i = 0; i < nums.size() - 1; ++i)
      {
        left.push_back(nums[i] + last_val);
        last_val = left[i] + nums[i];
      }

      last_val = 0;
      int r {0};

      right.push_back(0);

      for (int i = nums.size() - 1; i >= 1; --i)
      {
        right.push_back(nums[i] + last_val);
        last_val = right[r] + nums[i];
        ++r;
      }

      sort(right.rbegin(), right.rend());

      vector<int> res;

      for (int i = 0, j = 0; i < nums.size(); ++i, ++j)
      {
        int res_aux {left[i] - right[j]};
        res_aux = res_aux < 0 ? res_aux * -1 : res_aux;

        res.push_back(res_aux);
      }
      
      return res;  
    }
};
