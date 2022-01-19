class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int ans = 0, middle = mat.size()/2;
        
        // primary diagonal
        for (int i = 0, i_aux = 0; i < mat.size(); i++, i_aux++) {
            ans += mat[i][i_aux];
        }
        
        if (mat.size() > 1) {
            
            // secondary diagonal
            for (int j = mat.size()-1, j_aux = 0; j >= 0; j--, j_aux++) {
                ans += mat[j][j_aux];
            }
            
            // avoid repated value in the diagonals
            return mat.size() % 2 == 0 ? ans : ans - mat[middle][middle];
        }

        return mat[0][0];  // return the only value
    }
};
