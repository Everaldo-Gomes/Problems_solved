#include <stack>

class Solution {
public:
    bool isValid(string s) {
     
        stack<char> stack;
        
        for (unsigned int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                stack.push(s[i]);   
            
            else if (stack.empty() || (char_reversed(s[i]) != stack.top()))
                return false;
            
            else
                stack.pop();
        }
        
        return stack.empty();
    }   
    
    char char_reversed(char s)
    {
        char c;
        
        if (s == ')')
            c = '(';
            
        else if (s == ']')
            c = '[';
            
        else //if (s == '}')
            c = '{';
        
        return c;
    }
};
