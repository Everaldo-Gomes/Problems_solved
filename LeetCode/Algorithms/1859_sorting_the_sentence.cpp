class Solution {
public:
    string sortSentence(string s) {
        
        string ans = "";
        int next_sentence = 0;
        char order = '1';
        
        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] == order) {
                
                if (order > '1') {
                    ans += " ";
                }
                
                for (int j = next_sentence; j < i; j++) {
                    ans += s[j];
                }
                
                next_sentence = i = 0;
                order++;
            }
            
            if (s[i] == ' ') {
                next_sentence = i+1;
            }
        }
        
        return ans;
    }
};
