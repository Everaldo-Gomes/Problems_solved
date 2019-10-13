#include <iostream>

using namespace std;

int main(){

    int A, B, C, D, PROD_AB, PROD_CD, DIFERENCA;

    cin >> A >> B;
    PROD_AB = A * B;

    cin >> C >> D;
    PROD_CD = C * D;

    DIFERENCA = PROD_AB - PROD_CD;

    cout << "DIFERENCA = " << DIFERENCA << endl;
    return 0;
}
