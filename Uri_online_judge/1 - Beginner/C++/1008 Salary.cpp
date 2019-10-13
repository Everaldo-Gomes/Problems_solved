#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int employee_number, worked_hours_in_a_month;
    double amount_per_hour, salary;

    cin >> employee_number >> worked_hours_in_a_month >> amount_per_hour;

    salary = amount_per_hour * worked_hours_in_a_month;

    cout << "NUMBER = " << fixed << setprecision(2) << employee_number << "\n"
         << "SALARY = " << "U$ " << salary << endl;

    return 0;
}
