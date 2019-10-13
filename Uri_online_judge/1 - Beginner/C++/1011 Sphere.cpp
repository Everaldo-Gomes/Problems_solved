#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double R, volume, PI = 3.14159;
    cin >> R;

    volume = (4.0/3) * PI * (pow(R,3));

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}
