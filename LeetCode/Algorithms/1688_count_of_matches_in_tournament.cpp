class Solution {
public:
    int numberOfMatches(int n) {
        
        int ans = 0, 
            matches = 0,
            qnt_team_advanced = 0;
        
        while (n > 1) {
            
            if (n % 2 == 0) {
                qnt_team_advanced = matches = n / 2;
            }
            else {
                matches = (n - 1) / 2;
                qnt_team_advanced = ((n - 1) / 2) + 1;
            }
            
            ans += matches;
            n = qnt_team_advanced;
        }
        
        return ans;
    }
};
