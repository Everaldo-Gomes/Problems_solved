#include <iostream>
using namespace std;

int main(){

    int initial_hour, final_hour, initial_minute, final_minute, total_time;

    cin >> initial_hour >> initial_minute >> final_hour >> final_minute;

    total_time = (final_hour * 60 + final_minute) - (initial_hour * 60 + initial_minute);

    if(total_time <= 0) total_time += 24 * 60;

    cout << "O JOGO DUROU " << total_time / 60 << " HORA(S) E " << total_time % 60 << " MINUTO(S)" << endl;

    return 0;
}
