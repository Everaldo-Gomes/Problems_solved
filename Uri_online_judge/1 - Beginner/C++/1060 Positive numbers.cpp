#include <iostream>

using namespace std;

int main(){

    float num[6], count = 0;;

    for(int i = 0; i < 6; i++) cin >> num[i];
    

    for(int i = 0; i < 6; i++)
        if(num[i] > 0) count++;
        
    cout << count << " valores positivos" << endl;

    return 0;
}
