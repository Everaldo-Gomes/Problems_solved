#include <iostream>

using namespace std;

int main(){

    int pw = 2002, p;

    do{
        cin >> p;
        if(p != pw)cout << "Senha Invalida" << endl;
        if(p == pw)cout << "Acesso Permitido" << endl;

    }while(p != pw);

    return 0;
}
