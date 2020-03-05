#include <iostream>

using  namespace std;

int main(){

    int num;
    cin >> num;

    for(int i = 0; i < 12; i++){
        if((num+i) % 2 != 0)cout << num+i << endl;
        else continue;
    }
    return 0;
}
