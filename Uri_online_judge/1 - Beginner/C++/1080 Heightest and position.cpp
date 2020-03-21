#include <iostream>

using namespace std;

int main(){

    int num[100], position = 0, aux = 0;

    for(int i = 0; i < 100; i++){
        cin >> num[i];

        if(num[i] > aux){
            aux = num[i];
            position = i;
        }
    }

    cout << aux << "\n" << position+1 << endl; // +1 because arrays starts at 0, otherwise the 5 position would be the fourth position

    return 0;
}
