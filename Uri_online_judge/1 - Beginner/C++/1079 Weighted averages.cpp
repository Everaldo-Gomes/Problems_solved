#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int test;
    cin >> test;

    float average[test], num[test], num2[test], num3[test];

    for(int i = 0; i < test; i++) cin >> num[i] >> num2[i] >> num3[i];

    for(int i = 0; i < test; i++){
        average[i] = (num[i] * 2 + num2[i] * 3 + num3[i] * 5) / (2 + 3 + 5);
        cout << fixed << setprecision(1) << average[i] << endl;
    }

    return 0;
}

