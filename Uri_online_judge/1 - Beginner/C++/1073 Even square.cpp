#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    int even_numbers[num];

    for(int i = 1; i <= num; i++) even_numbers[i] = i;

    for(int i = 1; i <= num; i++){
        if(even_numbers[i] % 2 == 0){
            cout << even_numbers[i] << "^2 = " << i * i << endl;
        }
        else continue;
    }

    return 0;
}

