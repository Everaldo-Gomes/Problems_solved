class Solution {
public:
    bool halvesAreAlike(string s) {
    
        int a_qnt = 0, b_qnt = 0;
        
        for (int i = 0, j = s.size()/2; i < s.size()/2; i++, j++) {
            
            if (check_vowels(s[i])) {
                a_qnt++;           
            }
            
            if (check_vowels(s[j])) {
                b_qnt++;
            }
        }
        
        return a_qnt == b_qnt ? true : false;
    }
    
    bool check_vowels(char c) {
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        
        return false;
    }
};
