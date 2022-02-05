class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for (auto w : words) {
            if (w == reverse_word(w)) {
                return w;
            }
        }
        
        return "";
    }
    
    string reverse_word(string w) {
        
        for (int i = 0, j = w.size()-1; i < w.size()/2; i++, j--) {
            swap(w[i], w[j]);
        }
        
        return w;
    }
};
