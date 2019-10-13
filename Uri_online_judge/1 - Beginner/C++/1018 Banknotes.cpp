#include <iostream>

using namespace std;

int main(){

    int value, remainder;
    cin >> value;

    cout << value << "\n";

    cout << value / 100 << " nota(s) de R$ 100,00\n";
    remainder = value % 100;

    cout << remainder / 50 << " nota(s) de R$ 50,00\n";
    remainder %= 50;

    cout << remainder / 20 << " nota(s) de R$ 20,00\n";
    remainder %= 20;

    cout << remainder / 10 << " nota(s) de R$ 10,00\n";
    remainder %= 10;

    cout << remainder / 5 << " nota(s) de R$ 5,00\n";
    remainder %= 5;

    cout << remainder / 2 << " nota(s) de R$ 2,00\n";
    remainder %= 2;

    cout << remainder / 1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
