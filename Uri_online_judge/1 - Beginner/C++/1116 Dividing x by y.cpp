#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float qnt;
    cin >> qnt;

    float num[(int)qnt], x[(int)qnt], y[(int)qnt];

    for(int i = 0; i < qnt; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < qnt; i++){
        if(y[i] == 0) cout << "divisao impossivel" << endl;
        else cout << fixed << setprecision(1) << x[i] / y[i] << endl;
    }

    return 0;
}
