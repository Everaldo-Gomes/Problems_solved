#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(unsigned int i = 0; i < ar.size(); i++) {
        sum += ar[i];
    }
    return sum;
}
