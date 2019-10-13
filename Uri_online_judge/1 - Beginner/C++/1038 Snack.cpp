#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int code, quantity;
    float value_to_pay, price;

    cin >> code >> quantity;

    switch(code){
        case 1:
            price = 4.00;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 5.00;
            break;
        case 4:
            price = 2.00;
            break;
        case 5:
            price = 1.50;
            break;
    }

    value_to_pay = price * quantity;
    cout << fixed << setprecision(2) << "Total: R$ " << value_to_pay << endl;

    return 0;
}
