class Solution {
public:
    vector<string> cellsInRange(string s) {
     
        char init_col = s[0],
             last_col = s[3];
        
        int init_line, last_line;
        stringstream line_a;
        
        line_a << s[1];
        line_a >> init_line;
        
        stringstream line_b;
        line_b << s[4];
        line_b >> last_line;
        
        vector<string> list;
        
        for (char c = init_col; c <= last_col; c++)
        {
            for (int i = init_line; i <= last_line; i++)
            {
                string aux_line;
             
                stringstream new_line;
                new_line << i;   
                new_line >> aux_line;
                
                list.push_back(c + aux_line);
            }
        }
        
        return list;
    }
};
