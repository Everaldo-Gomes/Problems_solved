class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maximum = 0;
        
        for (int i = 0; i < sentences.size(); i++) {      
            
            int aux = 0;
            
            for (int j = 0; j < sentences[i].size(); j++) {
                
                if (sentences[i][j] == ' ') {
                    aux++;
                }
            }
            
            maximum = max(maximum, ++aux);
        }
        
        return maximum;
    }
};
