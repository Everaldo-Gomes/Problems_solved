#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;

    cin >> a >> b >> c;

    triangulo = (a * c) / 2;
    circulo   = pi * (pow(c,2));
    trapezio  = ((a + b) * c) / 2;
    quadrado  = b * b;
    retangulo = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << "\n"
         << "CIRCULO: "   << circulo   << "\n"
         << "TRAPEZIO: "  << trapezio  << "\n"
         << "QUADRADO: "  << quadrado  << "\n"
         << "RETANGULO: " << retangulo << endl;


    return 0;
}
