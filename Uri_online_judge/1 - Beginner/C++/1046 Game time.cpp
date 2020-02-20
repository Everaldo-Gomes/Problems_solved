#include <iostream>
using namespace std;

int main(){

    int time1,time2,total_time;
    cin >> time1 >> time2;

    if(time1 < time2){
        total_time = time2 - time1;
        cout << "O JOGO DUROU " << total_time << " HORA(S)" << endl;
    }
    else if(time1 > time2){
       total_time = 24 - time1 + time2;
       cout << "O JOGO DUROU " << total_time << " HORA(S)" << endl;
    }
    else if(time1 == time2) cout << "O JOGO DUROU 24 HORA(S)" << endl;

    return 0;
}
