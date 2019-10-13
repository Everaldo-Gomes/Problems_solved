#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int total_distance_km;
    double total_fuel_spent, total_car_consumption;

    cin >> total_distance_km >> total_fuel_spent;

    total_car_consumption = total_distance_km / total_fuel_spent;

    cout << fixed << setprecision(3) << total_car_consumption << " km/l" << endl;

    return 0;
}
