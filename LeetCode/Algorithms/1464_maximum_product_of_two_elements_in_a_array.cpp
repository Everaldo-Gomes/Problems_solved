int maxProduct(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      const int s = nums.size();
      int a = nums[s-1];
      int b = nums[s-2];
      cout << a << " " << b << endl;
      
      return (a-1) * (b-1);
    }
