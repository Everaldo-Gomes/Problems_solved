#include <iostream>

using namespace std;

int main(){

    float interval;
    cin >> interval;

    if(interval < 0.00 || interval > 100.00){
        cout << "Fora de intervalo" << endl;
    }
    else{
        if(interval >= 0.00 && interval <= 25.00)  cout << "Intervalo [0,25]"   << endl;
        if(interval > 25.00 && interval <= 50.00)  cout << "Intervalo (25,50]"  << endl;
        if(interval > 50.00 && interval <= 75.00)  cout << "Intervalo (50,75]"  << endl;
        if(interval > 75.00 && interval <= 100.00) cout << "Intervalo (75,100]" << endl;
    }

    return 0;
}
