#include <iostream>

using namespace std;

int main(){
    int year, month, day, age; //age in days

    cin >> age;

    year = age / 365;
    month = (age % 365) / 30;
    day = (age % 365) % 30;

    cout << year << " ano(s)\n"
         << month << " mes(es)\n"
         << day << " dia(s)" << endl;

    return 0;
}
