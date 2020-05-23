#include <iostream>

using namespace std;

int main(){

    int a,b, qnt_num, loop_sum = 0;

    cin >> qnt_num;

    for(int i = 0; i < qnt_num; i++){
        cin >> a >> b;

        if(a > b)swap(a,b);

        for(int j = a+1; j < b; j++){
            if(j % 2 != 0){
                loop_sum += j;
            }
        }
        cout << loop_sum << endl;
        loop_sum = 0;
    }


    return 0;
}
