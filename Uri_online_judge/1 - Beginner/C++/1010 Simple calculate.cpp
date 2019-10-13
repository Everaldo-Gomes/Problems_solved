#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int code_product_1, code_product_2, unit_product_1, unit_product_2;
    double price_unit_product_1, price_unit_product_2, value_to_pay;

    cin >> code_product_1 >> unit_product_1 >> price_unit_product_1;
    cin >> code_product_2 >> unit_product_2 >> price_unit_product_2;

    value_to_pay = (unit_product_1 * price_unit_product_1) + (unit_product_2 * price_unit_product_2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << value_to_pay << endl;

    return 0;
}
