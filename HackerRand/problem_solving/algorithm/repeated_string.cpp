
long repeatedString(string s, long n) {
    
    unsigned long long int s_len = s.size();
    unsigned long long int a_qnt = 0;
    
    if (s_len == 1 && s == "a") {   
        a_qnt = n;
    }
    
    //"adding" string
    else if (n >= s_len && s_len > 1) {
        
        //how many a's the initial string has
        for (unsigned long long int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                a_qnt++;
            }
        }
        
        //qnt that can be repeated without passing the limits
        unsigned long long int repeat = (n / s_len);  
        
        a_qnt *= repeat;
        
        //adding the remaning of letters and counting if there is an 'a'
        for (unsigned long long int i = 0; i < (n % s_len); i++) {
             
            if (s[i] == 'a') {
                a_qnt++;
            }
        }
    }
    else if (n < s_len) {
        
        for (unsigned long long int i = 0; i < n; i++) {
             
            if (s[i] == 'a') {
                a_qnt++;
            }
        }
    }
        
    return a_qnt;
}
