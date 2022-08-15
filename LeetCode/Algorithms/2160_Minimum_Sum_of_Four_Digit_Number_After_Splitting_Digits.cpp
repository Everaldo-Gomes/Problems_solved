class Solution {
public:
    int minimumSum(int num) {
        
        vector<short int> values;

        for (short int i = 0, m = 10, mt = 1; i < 4; i++, m *= 10, mt *= 10)
            values.push_back(num % m / mt);
        
        sort(values.begin(), values.end());
        return (values[0] * 10 + values[2]) + (values[1] * 10 + values[3]);
    }
};
