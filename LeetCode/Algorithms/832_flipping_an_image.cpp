class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        vector<int> aux;
        
        for (int i = 0; i < image.size(); i++) {
            
            // get row
            for (int j = 0; j < image.size(); j++) {
                aux.push_back(image[i][j]);
            }
            
            // flip row
            for (int k = 0, l = aux.size()-1; k < aux.size()/2; k++, l--) {
                swap(aux[k], aux[l]);                
            }
            
            // invert
            for (int m = 0; m < image.size(); m++) {
                image[i][m] = aux[m] == 0 ? 1 : 0;
            }
        }
        
        return image;
    }
};
