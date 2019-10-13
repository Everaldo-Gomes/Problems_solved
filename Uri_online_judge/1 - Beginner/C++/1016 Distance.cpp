#include <iostream>

using namespace std;

int main(){

    int minutos, distance;

    cin >> distance;

    /*
    60 / 60.0 speed of the first car  / a minute
    90 / 60.0 speed of the second car / a minute
    */

    minutos = distance / ((90 / 60.0) - (60 / 60.0));

    cout << minutos << " minutos" << endl;

    return 0;
}
