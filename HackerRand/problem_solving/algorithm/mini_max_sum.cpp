void miniMaxSum(vector<int64_t> arr) {
    sort(arr.begin(), arr.end());
    int64_t mx = 0, mi = 0;

    for(unsigned int i = 0; i < arr.size()-1; i++) { mi += arr[i]; }

    for(unsigned int i = arr.size()-1; i > 0; i--) { mx += arr[i]; }

    cout << mi << " " << mx << endl;
}
