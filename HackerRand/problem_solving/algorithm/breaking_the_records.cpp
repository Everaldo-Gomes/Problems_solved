vector<int> breakingRecords(vector<int> scores) {
    vector<int> v(2);
    int g, worst;
    g = worst = scores[0];
    int times = 0, lowest = 0;
    
    for(unsigned int i = 1; i < scores.size(); i++) {
        if(scores[i] > g) {
            g = scores[i];
            times++;
        }
        if(scores[i] < worst) {
            worst = scores[i];
            lowest++;
        }
    }
    v[0] = times;
    v[1] = lowest;
    return v;
}
