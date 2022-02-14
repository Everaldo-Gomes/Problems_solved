class Solution {
public:
    string replaceDigits(string s) {
        
        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] >= '0' && s[i] <= '9') {
                
                string ss = "";
                ss += s[i];
                int aux = stoi(ss);
                
                char letter = s[i-1];
                
                for (int j = 0; j < aux; j++) {
                    letter++;
                }
                
                s[i] = letter;    
            }
        }
        return s;
    }
};
