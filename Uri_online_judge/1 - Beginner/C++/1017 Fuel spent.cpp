#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   int time_h, speed_km, distance;
   double liters;

   cin >> time_h >> speed_km;

   //12km/1
   distance = time_h * speed_km;
   liters = distance / 12.0;

   cout << fixed << setprecision(3) << liters << endl;

    return 0;
}
