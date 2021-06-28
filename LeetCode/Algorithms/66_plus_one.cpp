class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        bool beginning = true;
        
        if (digits.size() == 1 && digits[0] < 9) {
            digits[0]++;
        }
        else if (digits[digits.size()-1]+1 > 9) {
            digits[digits.size()-1] = 0;   
            
            for (int i = digits.size()-2; i >= 0; i--) {
                if (digits[i] < 9) {
                    digits[i]++;
                    beginning = false;
                    break;
                }
                else {
                    digits[i] = 0;
                }
            }
            if (beginning) {
                digits.resize(digits.size()+1);    
                digits[0] = 1;
            }
        }
        else {
            digits[digits.size()-1]++;   
        }
        
        return digits;
    }
};
