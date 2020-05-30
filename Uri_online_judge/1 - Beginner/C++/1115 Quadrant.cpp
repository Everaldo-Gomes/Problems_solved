#include <iostream>

using namespace std;

int main(){

    int x[10], y[10], i = 0, count = 0;

    while(true){
        cin >> x[i] >> y[i];
        if(x[i] == 0 || y[i] == 0)break;
        i++;
        count++;
    }

    for(i = 0; i < count; i++){
        if(x[i] > 0 && y[i] > 0) cout << "primeiro" << endl;
        if(x[i] < 0 && y[i] > 0) cout << "segundo" << endl;
        if(x[i] < 0 && y[i] < 0) cout << "terceiro" << endl;
        if(x[i] > 0 && y[i] < 0) cout << "quarto" << endl;
    }

    return 0;
}
