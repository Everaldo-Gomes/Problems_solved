class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> ans;
        ans.push_back(first);
        
        for (int i = 0; i < encoded.size(); i++) {
            
            int aux = max(first, encoded[i]) ^ min(first, encoded[i]);
            ans.push_back(aux);
            first = aux;
        }
        
        return ans;
    }
};
