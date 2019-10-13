#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a, b, c, greatest_ab, greatest_abc;

    cin >> a >> b >> c;

    greatest_ab = (a + b + abs(a - b)) / 2;
    greatest_abc = (greatest_ab + c + abs(greatest_ab - c)) / 2;

    cout << greatest_abc << " eh o maior" << endl;

    return 0;
}
