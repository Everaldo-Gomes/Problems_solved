#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float salary, pay;
    cin >> salary;

    if(salary <= 2000.00){
        cout << "Isento" << endl;
    }
    else if(salary > 2000.00 && salary <= 3000.00){
        pay = (salary - 2000.00) * 0.08;
        cout << fixed << setprecision(2) << "R$ " << pay << endl;
    }
    else if(salary > 3000.00 && salary <= 4500.00){
        pay = ((salary - 3000.00) * 0.18 + 1000.00 * 0.08);
        cout << fixed << setprecision(2) << "R$ " << pay << endl;
    }
    else if(salary > 4500.00){
        pay = ((salary - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
        cout << fixed << setprecision(2) << "R$ " << pay << endl;
    }
    return 0;
}
