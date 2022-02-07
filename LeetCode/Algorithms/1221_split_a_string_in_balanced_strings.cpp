class Solution {
public:
    int balancedStringSplit(string s) {
        
        
        int d = 0, ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] == 'L') {
                d--;
            }
            else {
                d++;
            }
            
            if (d == 0) {
                ans++;        
            }
        }
        
        return ans;
    }
};
