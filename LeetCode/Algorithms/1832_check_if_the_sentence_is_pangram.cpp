class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        sort(sentence.begin(), sentence.end());
        
        char letter = 'a';
        
        for (int i = 0; i < sentence.size(); i++) {
            
            if (sentence[i] == letter) {
                letter++;
            }   
            
            if (letter > 'z') {
                return true;
            }
        }
        
        return false;
    }
};
