class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double> res(2);

        res[0] = celsius + 273.15;    // C -> K
        res[1] = celsius * 1.80 + 32; // C -> F

        return res;
    }
};
