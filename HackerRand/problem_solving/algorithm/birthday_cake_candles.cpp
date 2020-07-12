int birthdayCakeCandles(vector<int64_t> ar) {
    sort(ar.begin(), ar.end());
    int n, blow = 0;

    if(ar.size() == 1) { n = ar.size(); }
    else {n = ar.size()-1; }

    for(int i = n; i >= 0; i--) { 
        if(ar[n] == ar[i]) { blow++; }
        else { break; }
    }
    return blow;
}
