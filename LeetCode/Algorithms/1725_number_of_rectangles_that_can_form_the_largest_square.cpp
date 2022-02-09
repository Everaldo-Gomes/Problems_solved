class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        vector<int> aux;
        int largest = 0, useless_value = 0;
        
        for (auto x : rectangles) {
            
            int val = min(x[0], x[1]);
            
            // preventing from adding number smaller than the CURRENT largest number.
            if (val >= largest) {  
                aux.push_back(val);
                largest = val;
            }
        }
        
        // check if there are any other number smaller than the largest number
        for (auto x : aux) {
            if (x < largest) {
                useless_value++;
            }
        }
        
        return aux.size() - useless_value;
    }
};
