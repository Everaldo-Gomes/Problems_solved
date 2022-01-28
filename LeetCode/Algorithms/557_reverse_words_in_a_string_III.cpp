class Solution {
public:
    string reverseWords(string s) {
    
        string aux = "", ans = "";
        
        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] != ' ')
                aux += s[i];
            
            if (s[i] == ' ' || i >= s.size()-1) {
                
                for (int j = 0, k = aux.size()-1; j < aux.size()/2; j++, k--) {
                    swap(aux[j], aux[k]);
                }
                
                for (int l = 0; l < aux.size(); l++) {
                    ans += aux[l];
                }
            
                if (i < s.size()-1)
                    ans += ' ';
                
                aux = "";   
            }
        }
        
        return ans;
    }
};
