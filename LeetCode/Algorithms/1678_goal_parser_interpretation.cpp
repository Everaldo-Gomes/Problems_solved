class Solution {
public:
    string interpret(string command) {
        
        string interpretation = "";
        
        for (int i = 0; i < command.size(); i++) {
            
            if (command[i] == 'G') {
                interpretation += "G";
            }
            else if (command[i] == '(' && command[i+1] == ')') {
                interpretation += "o";
            }
            else if (command[i] == '(' && command[i+1] == 'a') {
                interpretation += "al";
            }
        }
        
        return interpretation;
    }
};
