int diagonalDifference(vector<vector<int>> arr) {
    int left = 0, right = 0;

    //left to right
    for(int i = 0; i < arr.size(); i++) {
        int j = i;
        left += arr[i][j];
    } 
       
    //right to left
    for(int k = arr.size()-1, j = 0; k >= 0; k--, j++) { right += arr[j][k]; }
    cout << right << endl;
    
    int ans = left-right;
    if(ans < 0) ans *= -1;
    return ans;
}
