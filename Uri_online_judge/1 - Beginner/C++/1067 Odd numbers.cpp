#include <iostream>

using namespace std;

int main(){

    int num;
    cin >> num;

    for(int i = 0; i <= num; ++i){
        if(i % 2 == 0)continue;
         cout << i << "\n";
    }

    return 0;
}
