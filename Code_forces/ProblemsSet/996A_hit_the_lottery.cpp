#include <iostream>
using namespace std;

int main(){

  long long int value, remainder, qnt = 0;
    cin >> value;
    
    if(value / 100 != 0) qnt += value/100;
    remainder = value % 100;
    
    if(remainder / 20 != 0) qnt += remainder/20;
    remainder %= 20;
    
    if(remainder / 10 != 0) qnt += remainder/10;
    remainder %= 10;

    if(remainder / 5 != 0) qnt += remainder/5;
    remainder %= 5; 

    if(remainder / 1 != 0) qnt += remainder/1;
    
    cout << qnt << endl;
    return 0;
}
