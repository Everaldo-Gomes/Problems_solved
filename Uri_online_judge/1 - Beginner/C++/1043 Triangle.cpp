#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float a, b, c, triangle_perimeter, trapezium_area;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if((a + b > c) && (a + c > b) && ( c + b > a)){
        triangle_perimeter = a + b + c;
        cout << "Perimetro = " << triangle_perimeter << endl;
    }
    else{
        trapezium_area = ((a+b)/2.0) * c;
        cout << "Area = " << trapezium_area << endl;
    }

    return 0;
}
