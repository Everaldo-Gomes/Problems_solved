#include <iostream>

using namespace std;

int main(){

    int value[5], even, odd, positive, negative;
    even = odd = positive = negative = 0;

    for(int i = 0; i < 5; i++){
        cin >> value[i];

        if(value[i] % 2 == 0)even++;
        if(value[i] % 2 != 0)odd++;
        if(value[i] > 0)positive++;
        if(value[i] < 0)negative++;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative <<" valor(es) negativo(s)" << endl;

    return 0;
}
