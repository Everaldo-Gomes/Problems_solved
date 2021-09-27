int jumpingOnClouds(vector<int> c) {
    
    int jump = 0;
    
    for (int i = 0; i < c.size();) {
        
        if (i+2 <= c.size()-1) { //check if i won't exced the array limit
            
            //check if i can jump 2 clouds
            if (c[i+2] != 1) {
                i += 2;
                jump++;
            }
            else {
                i++;
                jump++;
            }   
        }
        else if (i+1 <= c.size()-1) { //check if i won't exced the array limit
            
            if (c[i+1] != 1) {
                i++;
                jump++;   
            }
            else {
                i++;
            }
        }
        else {
            i++;
        }
    }
    
    return jump;
}
