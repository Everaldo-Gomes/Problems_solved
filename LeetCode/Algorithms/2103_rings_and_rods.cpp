class Solution {
public:
    int countPoints(string rings) {
        
        int counter = 0;
        char n = '0';
        
        for (int i = 0; i < 10; i++, n++) {
            
            bool b = false, g = false, r = false;
            
            for (int j = 0; j < rings.size(); j+=2) {
                
                if (rings[j] == 'R' && rings[j+1] == n) {
                    r = true;    
                }
                else if (rings[j] == 'G' && rings[j+1] == n) {
                    g = true;
                }
                else if (rings[j] == 'B' && rings[j+1] == n) {
                    b = true;
                }
                
                if (r && g && b) {
                    counter++;
                    break;
                }
            }
        }
        
        return counter;
    }
};
