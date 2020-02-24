#include <iostream>

using namespace std;

int main(){

    int value[5], even = 0;

    for(int i = 0; i < 5; i++){
        cin >> value[i];

        if(value[i] % 2 == 0)even++;
    }

    cout << even << " valores pares" << endl;
    return 0;
}
