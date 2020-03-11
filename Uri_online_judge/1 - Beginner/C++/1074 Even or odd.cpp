#include <iostream>

using namespace std;

int main(){

    int test;
    cin >> test;
    int  num[test];

    for(int i = 0; i < test; ++i) cin >> num[i];

    for(int i = 0; i < test; i++){
        if(num[i] % 2 == 0){
            if(num[i] == 0) cout << "NULL" << endl;
            if(num[i] < 0)  cout << "EVEN NEGATIVE" << endl;
            if(num[i] > 0)  cout << "EVEN POSITIVE" << endl;
        }else{
            if(num[i] % 2 != 0){
                if(num[i] > 0) cout << "ODD POSITIVE" << endl;
                if(num[i] < 0) cout << "ODD NEGATIVE" << endl;
            }
        }
    }

    return 0;
}
