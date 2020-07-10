int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int pair = 0;
    for(unsigned int i = 1; i < ar.size();) {
        if(ar[i-1] == ar[i]) {
            pair++;
            i += 2;
        }
        else { i++; }
    }
    return pair;
}
