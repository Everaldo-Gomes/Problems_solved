class Solution {
public:
    int countDigits(int num) {

      string s {to_string(num)};
      int counter {0};
      int divider {1};

      for (long long int i = 0; i < s.size(); ++i)
      {
        int digit = num / divider % 10;
        
        if (num % digit == 0)
          counter++;

        divider *= 10;
      }

      return counter;
    }
};
