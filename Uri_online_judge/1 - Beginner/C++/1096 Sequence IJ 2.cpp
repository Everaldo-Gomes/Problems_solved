#include <iostream>
using namespace std;

int main(){

    int i = 1, j = 7;

    while(true){
        cout << "I=" << i << " J=" << j << endl;
        j--;
        if(j < 5){
            i += 2;
            j = 7;
        }
        if(i >= 10)break;
    }
    return 0;
}
