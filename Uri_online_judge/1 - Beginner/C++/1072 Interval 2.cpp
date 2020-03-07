#include <iostream>

using namespace std;

int main(){

    int x, in = 0, out = 0;
    cin >> x;

    for(int i = 0; i < x; i++){
        int value[i];
        cin >> value[i];

        if(value[i] >= 10 && value[i] <= 20)in++;
        if(value[i] < 10 || value[i] > 20)out++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
