class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int key = 0; // as the default value for "type";
        
        if (ruleKey == "color") {
            key = 1;    
        }
        else if (ruleKey == "name") {
            key = 2;
        }
        
        int matchCounter = 0;
        
        for(int j = 0; j < items.size(); j++) {
            
            if (items[j][key] == ruleValue) {
                matchCounter++;
            }
        }
        
        return matchCounter;
    }   
};
