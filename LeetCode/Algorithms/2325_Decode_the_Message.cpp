class Solution {
public:
    string decodeMessage(string key, string message) {
        
        std::array<std::pair<char,char>, 26> letter;
        char c = 'a';
        
        for (short int i = 0, k = 0; i < 26; k++) 
        {  
            if (key[k] == ' ')
            {
                continue;
            }
            
            bool exist = false;
                        
            for (short int j = 0; j < letter.size(); j++)
            {
                if (letter.at(j).second == key[k])
                {
                    exist = true;
                    break;
                }
            }
            
            if (!exist) 
            {
                letter.at(i) = {c, key[k]};
                i++; c++;
            }    
        }
        
        string decoded_msg = "";
        
        for (unsigned short int i = 0; i < message.size(); i++)
        {  
            for (unsigned short int j = 0; j < letter.size(); j++)
            {
                if (letter[j].second == message[i])
                {
                    decoded_msg += letter[j].first;
                    break;
                }
                
                if (message[i] == ' ')
                {
                    decoded_msg += ' ';
                    break;
                }
            }
        }
        
        return decoded_msg;
    }
};
