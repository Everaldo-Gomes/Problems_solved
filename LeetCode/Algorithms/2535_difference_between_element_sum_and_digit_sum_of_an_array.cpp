class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      
      int sum {0};
      int sum_digits {0};

      for (int i = 0; i < nums.size(); ++i)
        sum += nums[i];

      for (int i = 0; i < nums.size(); ++i)
      {
        string s {to_string(nums[i])};
        int divisor {1};

        for (int j = 0; j < s.size(); ++j)
        {
          int aux_val {nums[i] / divisor % 10};
          divisor *= 10;

          sum_digits += aux_val;
        }
      }
      
      return abs(sum - sum_digits);
    }
};