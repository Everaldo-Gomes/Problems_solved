int countingValleys(int n, string s) {
    bool back_sea_level = true;
    int sea_level = 0;
    int step = 0;
    int valley = 0;

    for(unsigned int i = 0; i < s.size(); i++) {
        if(s[i] == 'U') { step++; }
        else if(s[i] == 'D') { step--; }

        if(step < sea_level && back_sea_level) { 
            valley++; 
            back_sea_level = false;
        }
        if(step >= sea_level) {
            back_sea_level = true;
        }
    }
    return valley;
}
