#include <iostream>
using namespace std;

int main(){
//===========================================
//SECOND TRY, IS BETTER AND CLEANER

    for(int i = 1; i < 2; i+=2){
        for(int j = 7; j > 4; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    for(int i = 3; i < 4; i+=2){
        for(int j = 9; j > 6; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }
    for(int i = 5; i < 6; i+=2){
        for(int j = 11; j > 8; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }
    for(int i = 7; i < 8; i+=2){
        for(int j = 13; j > 10; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }
    for(int i = 9; i < 10; i+=2){
        for(int j = 15; j > 12; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }


//=================================================================
//FRIST TRY, IT WORKS BUT IS TOO LONG AND A LITTLE CONFUSING

//    int i = 1, j = 7;
//
//    while(i < 10){
//        cout << "I=" << i << " J=" << j << endl;
//        j--;
//
//        if(j < 5){
//            i += 2;
//            j = 9;
//            break;
//        }
//    }
//
//    while(i < 10){
//        cout << "I=" << i << " J=" << j << endl;
//        j--;
//
//        if(j < 7){
//            i += 2;
//            j = 11;
//            break;
//        }
//    }
//
//    while(i < 10){
//        cout << "I=" << i << " J=" << j << endl;
//        j--;
//
//        if(j < 9){
//            i += 2;
//            j = 13;
//            break;
//        }
//    }
//
//    while(i < 10){
//        cout << "I=" << i << " J=" << j << endl;
//        j--;
//
//        if(j < 11){
//            i += 2;
//            j = 15;
//            break;
//        }
//    }
//
//    while(i < 10){
//        cout << "I=" << i << " J=" << j << endl;
//        j--;
//
//        if(j < 13){
//            i += 2;
//            j = 17;
//            break;
//        }
//    }

    return 0;
}
