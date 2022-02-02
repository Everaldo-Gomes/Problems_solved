// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        unsigned int left = 0, right = n, middle, bad_version = 1;
                
        while (left <= right) {
            
            middle = (left + right) / 2;
            
            if (isBadVersion(middle)) {
                right = middle-1;
                bad_version = middle;
            }
            else if (!isBadVersion(middle)) {
                left = middle+1;
            }
        }
        
        return bad_version;
    }
};
