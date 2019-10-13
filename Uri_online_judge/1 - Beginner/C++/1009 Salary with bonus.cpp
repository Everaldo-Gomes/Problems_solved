#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    string name;
    double fixed_salary, sold_in_month, total_salary;

    cin >> name >> fixed_salary >> sold_in_month;

    total_salary = fixed_salary + sold_in_month * 0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total_salary << endl;

    return 0;
}
