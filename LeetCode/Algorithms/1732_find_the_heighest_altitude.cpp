class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int altitude = 0;
        int heighest = 0;
        
        for (int i = 0; i < gain.size(); i++) {

            heighest = max(heighest, altitude + gain[i]);
            altitude += gain[i];
        }
        
        return heighest;
    }
};
