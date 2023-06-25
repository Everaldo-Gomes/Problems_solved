class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        int r;

        for (int i = 2; ; ++i)
        {
            if (i % 2 == 0 && i % n == 0)
            {
                r = i;
                break;
            }
        }

        return r;
    }
};
