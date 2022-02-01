class Solution {
public:
    
    int findCenter(vector<vector<int>>& edges) {
     
        vector<int> list;
        int counter = 0, last_num = 0;
        
        for (int i = 0; i < edges.size(); i++) {
            for (int j = 0; j < edges[i].size(); j++) {
                list.push_back(edges[i][j]);
            }
        }
        
        sort(list.begin(), list.end());
        last_num = list[0];
        
        for (int i = 0; i < list.size(); i++) {
            
            if (list[i] == last_num) {
                counter++;
            }
            else {
                last_num = list[i];
                counter = 1;
            }
            
            if (counter == edges.size()) {
                return list[i];
            }
        }
        
        return 0;
    }               
};