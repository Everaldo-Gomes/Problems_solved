#include <iostream>

using namespace std;

int main(){
    //3600 seconds = 1h
    int hour, minutes, seconds, set_time_sec;

    cin >> set_time_sec;

    hour = set_time_sec / 3600;
    minutes = (set_time_sec % 3600) / 60;
    seconds = set_time_sec % 60;

    cout << hour << ":" << minutes << ":" << seconds << endl;
    return 0;
}

